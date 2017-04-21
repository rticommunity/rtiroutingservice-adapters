# Routing Service Adapters: File 

Example of Routing Service adapter that can be used to read and write data from files.

The **StreamReader** for the File adapter reads the data from file specified in the routing service configuration for the adapter. Each line results on a single sample which is read, parsed, and stored into a DynamicData which is then given to the Routing Service.

The **StreamWriter** for the File adapter receives a DynamicData and writes it into a file specified in the routing service configuration for the adapter. Each sample is wtitten to a line.

The adapter is written in a generic manner such that it can operate on any data type. It gets the type information from the **DynamicData** and uses the introspection API to determine field names and types.

The data-types can be either discovered from the other side or the route, or else configured on the Routing Service XML configuration.

The file format uses is a set of comma-separated,  name=value pairs. Where each name=value pair represents a field as in:
```
color=RED,x=10,y=20,shapesize=30
```

You can modify the **LineConversion.c** to use a different file format.

## Running the adapter
The adapter is loaded into the RTI routing service using the XML configuration for the Routing Service. See  ```<adapter_plugin>``` XML tag in the ```file_adapter_config.xml``` file.

This same file can be used to configure the various properties of the adapter.

## Example executions

Executing in Linux (Ubuntu 14.04):
```
/home/gerardo/rti_connext_dds-5.2.7/bin/rtiroutingservice -cfgName file_to_dds -cfgFile file_adapter_config.xml -appName FileAdaptor
ubuntu:file$ /home/gerardo/rti_connext_dds-5.2.7/bin/rtiroutingservice -cfgName file_to_dds -cfgFile file_adapter_config.xml -appName FileAdapter
RTIRS_FileAdapterPlugin_create
RTIRS_FileAdapterPlugin_create_connection
RTIRS_FileConnection_create_session
RTI Routing Service 5.2.7 started (with name FileAdapter)
RTIRS_FileConnection_create_stream_reader...
RTIRS_FileConnection_create_stream_reader... OK
RTIRS_FileStreamReader_run. Period: {1,0}
RTIRS_FileStreamReader_run.
RTIRS_FileStreamReader_read
RTIRS_FileStreamReader_read...
RTIRS_FileStreamReader_read...
RTIRS_FileStreamReader_read: Returning regular sample:
color: "RED"
x: 10
y: 20
shapesize: 30
RTIRS_FileStreamReader_return_loan
RTIRS_FileStreamReader_run.
RTIRS_FileStreamReader_read
RTIRS_FileStreamReader_read...
RTIRS_FileStreamReader_read Returning disposed sample: 
RTIRS_FileStreamReader_return_loan
RTIRS_FileStreamReader_run.
RTIRS_FileStreamReader_read
RTIRS_FileStreamReader_read...
RTIRS_FileStreamReader_read Returning unregistered sample: 
RTIRS_FileStreamReader_return_loan
RTIRS_FileStreamReader_run.
RTIRS_FileStreamReader_read
RTIRS_FileStreamReader_read...
RTIRS_FileStreamReader_read...
RTIRS_FileStreamReader_read: Returning regular sample:
color: "GREEN"
x: 140
y: 160
shapesize: 40
RTIRS_FileStreamReader_return_loan
RTIRS_FileStreamReader_run.
RTIRS_FileStreamReader_read
RTIRS_FileStreamReader_read...
RTIRS_FileStreamReader_read...
RTIRS_FileStreamReader_read: Returning regular sample:
color: "RED"
x: 50
y: 40
shapesize: 50
RTIRS_FileStreamReader_return_loan
```
