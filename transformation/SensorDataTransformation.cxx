/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

/* ========================================================================= */
/* RTI Routing Service transformation Example                                */
/* ========================================================================= */
/*                                                                           */
/* See SensorDataTransformation.h                                            */
/*                                                                           */
/* ========================================================================= */
#include "SensorDataTransformation.h"

/*
 * Fuction that maps every element of struct SensorData from
 * SensorDataExample (see SensorDataExample.idl) into the separate
 * arrays of TransformedSensorDataExample
 * (see TransformedSensorDataExample.idl).
 *
 * This function has been implemented only for this example and isnot part of
 * the SensorDataTransformation class.
 */
dds::core::xtypes::DynamicData createOutputSample(
        const dds::core::xtypes::DynamicData &input) {
    TransformedSensorDataExample transformed_sensor_data_native;
    SensorDataExample sensor_data_native;
    sensor_data_native = rti::core::xtypes::convert<SensorDataExample>(input);

    /* Maps elements from SensorDataExample to TransformedSensorDataExample */
    for (int count = 0; count < TRANSFORMED_SENSOR_DATA_ARRAY_SIZE; ++count) {
        transformed_sensor_data_native.ID().at(count) =
                sensor_data_native.sensors().at(count).ID();
        transformed_sensor_data_native.active().at(count) =
                sensor_data_native.sensors().at(count).active();
        transformed_sensor_data_native.reading().at(count) =
                sensor_data_native.sensors().at(count).reading();
    }
    return rti::core::xtypes::convert(transformed_sensor_data_native);
}

/*****************************************************************************/
/* SensorDataTransformation::transform                                       */
/*                                                                           */
/* Creates the DDS publisher and data writers, then start sending the data.  */
/*  post Condition: output_sample_seq and output_sample_seq must have the    */
/* same number of elements.                                                  */
/*                                                                           */
/* Input:                                                                    */
/*   input_sample_seq: Sequence of input samples to be transformed           */
/*   input_info_seq: Sequence of the DDS_SampleInfo structs of the samples   */
/*      in input_sample_seq.                                                 */
/* Output:                                                                   */
/*   output_sample_seq: Placeholder sequence of the transformed samples      */
/*   output_info_seq: Sequence of the DDS_SampleInfo structs of the samples  */
/*      in input_info_seq.                                                   */
/*****************************************************************************/
void SensorDataTransformation::transform(
        std::vector<SamplePtr>& output_sample_seq,
        std::vector<InfoPtr>& output_info_seq,
        const std::vector<SamplePtr>& input_sample_seq,
        const std::vector<InfoPtr>& input_info_seq) {
    dds::core::xtypes::DynamicData *output;

    /* transform every sample in input_sample_seq */
    for (size_t count = 0; count < input_sample_seq.size(); ++count) {
        auto inputSample =
                (dds::core::xtypes::DynamicData*)input_sample_seq.at(count);

        /* If current sample cannot be converted, continue with the next one*/
		if (!rti::core::xtypes::can_convert<SensorDataExample>(*inputSample)) {
			printf("Cannot convert sample to SensorDataExample\n");
			continue;
		}
		output = new dds::core::xtypes::DynamicData(createOutputSample(*inputSample));

        /*
         * Store the output sample and its corresponding DDS_sampleInfo
         * in the output containers.
         */
        output_info_seq.push_back(input_info_seq[count]);
        output_sample_seq.push_back(output);
    }
}

/*****************************************************************************/
/* SensorDataTransformation::return_loan                                     */
/*                                                                           */
/* Free the resources used in SensorDataTransformation::transform            */
/*  post Condition: output_sample_seq and output_sample_seq must have the    */
/* same number of elements.                                                  */
/*                                                                           */
/* Input:                                                                    */
/*   input_sample_seq: Sequence of transformed samples                       */
/*   input_info_seq: Sequence of the DDS_SampleInfo of samples in            */
/*      input_sample_seq.                                                    */
/*****************************************************************************/
void SensorDataTransformation::return_loan(std::vector<SamplePtr>& sample_seq,
        std::vector<InfoPtr>& info_seq) {
    for (auto iterator = ++(sample_seq.crbegin());
            iterator != sample_seq.crend();
            delete (dds::core::xtypes::DynamicData*) *iterator++);
    sample_seq.clear();

    for (auto iterator = ++(info_seq.crbegin());
            iterator != info_seq.crend();
            delete (DDS_SampleInfo*) *iterator++);
    info_seq.clear();
}

SensorDataTransformation::~SensorDataTransformation() {

}