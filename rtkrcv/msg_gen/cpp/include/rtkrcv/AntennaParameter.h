/* Auto-generated by genmsg_cpp for file /home/asfandyar/gnss-master/rtkrcv/msg/AntennaParameter.msg */
#ifndef RTKRCV_MESSAGE_ANTENNAPARAMETER_H
#define RTKRCV_MESSAGE_ANTENNAPARAMETER_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace rtkrcv
{
template <class ContainerAllocator>
struct AntennaParameter_ {
  typedef AntennaParameter_<ContainerAllocator> Type;

  AntennaParameter_()
  : sat(0)
  , type()
  , code()
  , ts()
  , te()
  , off()
  , var()
  {
    off.assign(0.0);
    var.assign(0.0);
  }

  AntennaParameter_(const ContainerAllocator& _alloc)
  : sat(0)
  , type(_alloc)
  , code(_alloc)
  , ts()
  , te()
  , off()
  , var()
  {
    off.assign(0.0);
    var.assign(0.0);
  }

  typedef int32_t _sat_type;
  int32_t sat;

  typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _type_type;
  std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  type;

  typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _code_type;
  std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  code;

  typedef ros::Time _ts_type;
  ros::Time ts;

  typedef ros::Time _te_type;
  ros::Time te;

  typedef boost::array<double, 3>  _off_type;
  boost::array<double, 3>  off;

  typedef boost::array<double, 19>  _var_type;
  boost::array<double, 19>  var;


  typedef boost::shared_ptr< ::rtkrcv::AntennaParameter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtkrcv::AntennaParameter_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AntennaParameter
typedef  ::rtkrcv::AntennaParameter_<std::allocator<void> > AntennaParameter;

typedef boost::shared_ptr< ::rtkrcv::AntennaParameter> AntennaParameterPtr;
typedef boost::shared_ptr< ::rtkrcv::AntennaParameter const> AntennaParameterConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rtkrcv::AntennaParameter_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rtkrcv::AntennaParameter_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rtkrcv

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rtkrcv::AntennaParameter_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rtkrcv::AntennaParameter_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rtkrcv::AntennaParameter_<ContainerAllocator> > {
  static const char* value() 
  {
    return "236a657acfdd1f8edc7d4eec1fcbfcc4";
  }

  static const char* value(const  ::rtkrcv::AntennaParameter_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x236a657acfdd1f8eULL;
  static const uint64_t static_value2 = 0xdc7d4eec1fcbfcc4ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtkrcv::AntennaParameter_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rtkrcv/AntennaParameter";
  }

  static const char* value(const  ::rtkrcv::AntennaParameter_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rtkrcv::AntennaParameter_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# antenna parameter type\n\
\n\
int32 sat              # satellite number (0:receiver)\n\
int8[] type            # antenna type\n\
int8[] code            # serial number or satellite code\n\
\n\
time ts                # valid time start\n\
time te                # valid time end\n\
\n\
float64[3] off         # phase center offset e/n/u or x/y/z (m)\n\
float64[19] var        # phase center variation (m)\n\
                       # el=90,85,...,0 or nadir=0,1,2,3,... (deg)\n\
";
  }

  static const char* value(const  ::rtkrcv::AntennaParameter_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rtkrcv::AntennaParameter_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.sat);
    stream.next(m.type);
    stream.next(m.code);
    stream.next(m.ts);
    stream.next(m.te);
    stream.next(m.off);
    stream.next(m.var);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AntennaParameter_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtkrcv::AntennaParameter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rtkrcv::AntennaParameter_<ContainerAllocator> & v) 
  {
    s << indent << "sat: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sat);
    s << indent << "type[]" << std::endl;
    for (size_t i = 0; i < v.type.size(); ++i)
    {
      s << indent << "  type[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.type[i]);
    }
    s << indent << "code[]" << std::endl;
    for (size_t i = 0; i < v.code.size(); ++i)
    {
      s << indent << "  code[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.code[i]);
    }
    s << indent << "ts: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.ts);
    s << indent << "te: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.te);
    s << indent << "off[]" << std::endl;
    for (size_t i = 0; i < v.off.size(); ++i)
    {
      s << indent << "  off[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.off[i]);
    }
    s << indent << "var[]" << std::endl;
    for (size_t i = 0; i < v.var.size(); ++i)
    {
      s << indent << "  var[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.var[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // RTKRCV_MESSAGE_ANTENNAPARAMETER_H

