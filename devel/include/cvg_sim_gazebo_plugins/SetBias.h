// Generated by gencpp from file cvg_sim_gazebo_plugins/SetBias.msg
// DO NOT EDIT!


#ifndef CVG_SIM_GAZEBO_PLUGINS_MESSAGE_SETBIAS_H
#define CVG_SIM_GAZEBO_PLUGINS_MESSAGE_SETBIAS_H

#include <ros/service_traits.h>


#include <cvg_sim_gazebo_plugins/SetBiasRequest.h>
#include <cvg_sim_gazebo_plugins/SetBiasResponse.h>


namespace cvg_sim_gazebo_plugins
{

struct SetBias
{

typedef SetBiasRequest Request;
typedef SetBiasResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetBias
} // namespace cvg_sim_gazebo_plugins


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cvg_sim_gazebo_plugins::SetBias > {
  static const char* value()
  {
    return "af1f260075d9ba9bd73ca10c6a45df07";
  }

  static const char* value(const ::cvg_sim_gazebo_plugins::SetBias&) { return value(); }
};

template<>
struct DataType< ::cvg_sim_gazebo_plugins::SetBias > {
  static const char* value()
  {
    return "cvg_sim_gazebo_plugins/SetBias";
  }

  static const char* value(const ::cvg_sim_gazebo_plugins::SetBias&) { return value(); }
};


// service_traits::MD5Sum< ::cvg_sim_gazebo_plugins::SetBiasRequest> should match 
// service_traits::MD5Sum< ::cvg_sim_gazebo_plugins::SetBias > 
template<>
struct MD5Sum< ::cvg_sim_gazebo_plugins::SetBiasRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cvg_sim_gazebo_plugins::SetBias >::value();
  }
  static const char* value(const ::cvg_sim_gazebo_plugins::SetBiasRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cvg_sim_gazebo_plugins::SetBiasRequest> should match 
// service_traits::DataType< ::cvg_sim_gazebo_plugins::SetBias > 
template<>
struct DataType< ::cvg_sim_gazebo_plugins::SetBiasRequest>
{
  static const char* value()
  {
    return DataType< ::cvg_sim_gazebo_plugins::SetBias >::value();
  }
  static const char* value(const ::cvg_sim_gazebo_plugins::SetBiasRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cvg_sim_gazebo_plugins::SetBiasResponse> should match 
// service_traits::MD5Sum< ::cvg_sim_gazebo_plugins::SetBias > 
template<>
struct MD5Sum< ::cvg_sim_gazebo_plugins::SetBiasResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cvg_sim_gazebo_plugins::SetBias >::value();
  }
  static const char* value(const ::cvg_sim_gazebo_plugins::SetBiasResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cvg_sim_gazebo_plugins::SetBiasResponse> should match 
// service_traits::DataType< ::cvg_sim_gazebo_plugins::SetBias > 
template<>
struct DataType< ::cvg_sim_gazebo_plugins::SetBiasResponse>
{
  static const char* value()
  {
    return DataType< ::cvg_sim_gazebo_plugins::SetBias >::value();
  }
  static const char* value(const ::cvg_sim_gazebo_plugins::SetBiasResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CVG_SIM_GAZEBO_PLUGINS_MESSAGE_SETBIAS_H
