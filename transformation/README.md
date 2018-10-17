# Routing Service Transformations: File 

Example of Routing Service transformation that can be used to transform samples of type SensorDataExample to TransformedSensorDataExample (see included idls). This example gneerates a dynamic library that can b e used by Routing Service to perform the transformation.

Transformation code is in files:
- SensorDataTransformation.h
- SensorDataTransformation.cxx
- SensorDataTransformationPlugin.h
- SensorDataTransformationPlugin.cxx

The other files are support files generated with Code Generator of SensorDataExample and transformedSensorDataExample types.

## Build the adapter

- Go to the example folder.
- Create build folder.
	mkdir build
	cd build
Generate the build files:
- cmake ../ -G {Desired generator} -DNDDSHOME={Your connextdds installation folder} -DARCH={Desired achitecture specifier i.e i86Linux3gcc5.4.0}
- cmake --build ../

## Running the transformation

transformation requires a Publisher of type SensorDataExample and a Subscriber of typeTransformedSensorDataExample running. You can use the included idls with Code Generatir to build them.

Before executing Routing Service it
's necessary to modify snesordatatransf.xml to add the path to your gnerated dynamic library. Modify the the field
<dll>sensordatatransf.xml</dll> to include rhe path to the file and add the proper extension (dll or so). For example:
<dll>/home/someuser/sensordatatransf.so</dll>. Review the xml file for domainId or any other setting you may want to change.

Once both publisher and Subscriber are running you need to run Routing Service and use the profile "SensorDataTransformation" included in sensordatatransf.xml configuration:

<onnext installation folder>/bin/rtitoutingservice/rtiroutingservice -cfgFile <path to sensordatatransf.xml> -cfgName SensorDataTransformation
