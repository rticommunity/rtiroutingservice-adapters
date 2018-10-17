

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorDataExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SensorDataExample_229212648_hpp
#define SensorDataExample_229212648_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

static const int32_t SENSOR_DATA_ARRAY_SIZE = 64;

class NDDSUSERDllExport SensorData {
  public:
    SensorData();
    SensorData(
        uint32_t ID,
        float reading,
        bool active);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SensorData (SensorData&&) = default;
    SensorData& operator=(SensorData&&) = default;
    SensorData& operator=(const SensorData&) = default;
    SensorData(const SensorData&) = default;
    #else
    SensorData(SensorData&& other_) OMG_NOEXCEPT;  
    SensorData& operator=(SensorData&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint32_t& ID() OMG_NOEXCEPT; 
    const uint32_t& ID() const OMG_NOEXCEPT;
    void ID(uint32_t value);

    float& reading() OMG_NOEXCEPT; 
    const float& reading() const OMG_NOEXCEPT;
    void reading(float value);

    bool& active() OMG_NOEXCEPT; 
    const bool& active() const OMG_NOEXCEPT;
    void active(bool value);

    bool operator == (const SensorData& other_) const;
    bool operator != (const SensorData& other_) const;

    void swap(SensorData& other_) OMG_NOEXCEPT ;

  private:

    uint32_t m_ID_;
    float m_reading_;
    bool m_active_;

};

inline void swap(SensorData& a, SensorData& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SensorData& sample);

class NDDSUSERDllExport SensorDataExample {
  public:
    SensorDataExample();
    explicit SensorDataExample(
        const dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)>& sensors);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SensorDataExample (SensorDataExample&&) = default;
    SensorDataExample& operator=(SensorDataExample&&) = default;
    SensorDataExample& operator=(const SensorDataExample&) = default;
    SensorDataExample(const SensorDataExample&) = default;
    #else
    SensorDataExample(SensorDataExample&& other_) OMG_NOEXCEPT;  
    SensorDataExample& operator=(SensorDataExample&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)>& sensors() OMG_NOEXCEPT; 
    const dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)>& sensors() const OMG_NOEXCEPT;
    void sensors(const dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)>& value);

    bool operator == (const SensorDataExample& other_) const;
    bool operator != (const SensorDataExample& other_) const;

    void swap(SensorDataExample& other_) OMG_NOEXCEPT ;

  private:

    dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)> m_sensors_;

};

inline void swap(SensorDataExample& a, SensorDataExample& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SensorDataExample& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name<SensorData> {
            NDDSUSERDllExport static std::string value() {
                return "SensorData";
            }
        };

        template<>
        struct is_topic_type<SensorData> : public dds::core::true_type {};

        template<>
        struct topic_type_support<SensorData> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const SensorData& sample,
                dds::core::policy::DataRepresentationId representation 
                = dds::core::policy::DataRepresentation::xcdr());

            NDDSUSERDllExport 
            static void from_cdr_buffer(SensorData& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(SensorData& sample);

            NDDSUSERDllExport 
            static void allocate_sample(SensorData& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<SensorDataExample> {
            NDDSUSERDllExport static std::string value() {
                return "SensorDataExample";
            }
        };

        template<>
        struct is_topic_type<SensorDataExample> : public dds::core::true_type {};

        template<>
        struct topic_type_support<SensorDataExample> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const SensorDataExample& sample,
                dds::core::policy::DataRepresentationId representation 
                = dds::core::policy::DataRepresentation::xcdr());

            NDDSUSERDllExport 
            static void from_cdr_buffer(SensorDataExample& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(SensorDataExample& sample);

            NDDSUSERDllExport 
            static void allocate_sample(SensorDataExample& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type<SensorData> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<SensorData> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<SensorDataExample> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<SensorDataExample> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // SensorDataExample_229212648_hpp

