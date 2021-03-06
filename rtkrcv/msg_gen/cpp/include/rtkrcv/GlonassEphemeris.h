/* Auto-generated by genmsg_cpp for file /home/asfandyar/gnss-master/rtkrcv/msg/GlonassEphemeris.msg */
#ifndef RTKRCV_MESSAGE_GLONASSEPHEMERIS_H
#define RTKRCV_MESSAGE_GLONASSEPHEMERIS_H
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

#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"

namespace rtkrcv
{
template <class ContainerAllocator>
struct GlonassEphemeris_ {
  typedef GlonassEphemeris_<ContainerAllocator> Type;

  GlonassEphemeris_()
  : sat(0)
  , iode(0)
  , frq(0)
  , svh(0)
  , sva(0)
  , age(0)
  , toe()
  , tof()
  , pos()
  , vel()
  , acc()
  , taun(0.0)
  , gamn(0.0)
  , dtaun(0.0)
  {
  }

  GlonassEphemeris_(const ContainerAllocator& _alloc)
  : sat(0)
  , iode(0)
  , frq(0)
  , svh(0)
  , sva(0)
  , age(0)
  , toe()
  , tof()
  , pos(_alloc)
  , vel(_alloc)
  , acc(_alloc)
  , taun(0.0)
  , gamn(0.0)
  , dtaun(0.0)
  {
  }

  typedef int32_t _sat_type;
  int32_t sat;

  typedef int32_t _iode_type;
  int32_t iode;

  typedef int32_t _frq_type;
  int32_t frq;

  typedef int32_t _svh_type;
  int32_t svh;

  typedef int32_t _sva_type;
  int32_t sva;

  typedef int32_t _age_type;
  int32_t age;

  typedef ros::Time _toe_type;
  ros::Time toe;

  typedef ros::Time _tof_type;
  ros::Time tof;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _pos_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  pos;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _vel_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  vel;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acc_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  acc;

  typedef double _taun_type;
  double taun;

  typedef double _gamn_type;
  double gamn;

  typedef double _dtaun_type;
  double dtaun;


  typedef boost::shared_ptr< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtkrcv::GlonassEphemeris_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GlonassEphemeris
typedef  ::rtkrcv::GlonassEphemeris_<std::allocator<void> > GlonassEphemeris;

typedef boost::shared_ptr< ::rtkrcv::GlonassEphemeris> GlonassEphemerisPtr;
typedef boost::shared_ptr< ::rtkrcv::GlonassEphemeris const> GlonassEphemerisConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rtkrcv::GlonassEphemeris_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rtkrcv

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rtkrcv::GlonassEphemeris_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1bcea641826dae925fbfe0b21d6b21d3";
  }

  static const char* value(const  ::rtkrcv::GlonassEphemeris_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1bcea641826dae92ULL;
  static const uint64_t static_value2 = 0x5fbfe0b21d6b21d3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rtkrcv/GlonassEphemeris";
  }

  static const char* value(const  ::rtkrcv::GlonassEphemeris_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# GLONASS broadcast ephemeris type\n\
\n\
int32 sat                      # satellite number\n\
int32 iode                     # IODE (0-6 bit of tb field)\n\
int32 frq                      # satellite frequency number\n\
int32 svh                      # satellite health\n\
int32 sva                      # satellite accuracy\n\
int32 age                      # satellite age of operation\n\
\n\
time toe                       # epoch of epherides (gpst)\n\
time tof                       # message frame time (gpst)\n\
\n\
geometry_msgs/Vector3 pos      # satellite position (ecef) (m)\n\
geometry_msgs/Vector3 vel      # satellite velocity (ecef) (m/s)\n\
geometry_msgs/Vector3 acc      # satellite acceleration (ecef) (m/s^2)\n\
float64 taun                   # SV clock bias (s)\n\
float64 gamn                   # relative freq bias\n\
float64 dtaun                  # delay between L1 and L2 (s)\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::rtkrcv::GlonassEphemeris_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.sat);
    stream.next(m.iode);
    stream.next(m.frq);
    stream.next(m.svh);
    stream.next(m.sva);
    stream.next(m.age);
    stream.next(m.toe);
    stream.next(m.tof);
    stream.next(m.pos);
    stream.next(m.vel);
    stream.next(m.acc);
    stream.next(m.taun);
    stream.next(m.gamn);
    stream.next(m.dtaun);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GlonassEphemeris_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtkrcv::GlonassEphemeris_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rtkrcv::GlonassEphemeris_<ContainerAllocator> & v) 
  {
    s << indent << "sat: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sat);
    s << indent << "iode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.iode);
    s << indent << "frq: ";
    Printer<int32_t>::stream(s, indent + "  ", v.frq);
    s << indent << "svh: ";
    Printer<int32_t>::stream(s, indent + "  ", v.svh);
    s << indent << "sva: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sva);
    s << indent << "age: ";
    Printer<int32_t>::stream(s, indent + "  ", v.age);
    s << indent << "toe: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.toe);
    s << indent << "tof: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.tof);
    s << indent << "pos: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.pos);
    s << indent << "vel: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.vel);
    s << indent << "acc: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acc);
    s << indent << "taun: ";
    Printer<double>::stream(s, indent + "  ", v.taun);
    s << indent << "gamn: ";
    Printer<double>::stream(s, indent + "  ", v.gamn);
    s << indent << "dtaun: ";
    Printer<double>::stream(s, indent + "  ", v.dtaun);
  }
};


} // namespace message_operations
} // namespace ros

#endif // RTKRCV_MESSAGE_GLONASSEPHEMERIS_H

