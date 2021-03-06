/* Auto-generated by genmsg_cpp for file /home/asfandyar/gnss-master/rtkrcv/msg/sbssat_t.msg */
#ifndef RTKRCV_MESSAGE_SBSSAT_T_H
#define RTKRCV_MESSAGE_SBSSAT_T_H
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

#include "rtkrcv/sbssatp_t.h"

namespace rtkrcv
{
template <class ContainerAllocator>
struct sbssat_t_ {
  typedef sbssat_t_<ContainerAllocator> Type;

  sbssat_t_()
  : iodp(0)
  , nsat(0)
  , tlat(0)
  , sat()
  {
  }

  sbssat_t_(const ContainerAllocator& _alloc)
  : iodp(0)
  , nsat(0)
  , tlat(0)
  , sat(_alloc)
  {
  }

  typedef int32_t _iodp_type;
  int32_t iodp;

  typedef int32_t _nsat_type;
  int32_t nsat;

  typedef int32_t _tlat_type;
  int32_t tlat;

  typedef std::vector< ::rtkrcv::sbssatp_t_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rtkrcv::sbssatp_t_<ContainerAllocator> >::other >  _sat_type;
  std::vector< ::rtkrcv::sbssatp_t_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rtkrcv::sbssatp_t_<ContainerAllocator> >::other >  sat;


  typedef boost::shared_ptr< ::rtkrcv::sbssat_t_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtkrcv::sbssat_t_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct sbssat_t
typedef  ::rtkrcv::sbssat_t_<std::allocator<void> > sbssat_t;

typedef boost::shared_ptr< ::rtkrcv::sbssat_t> sbssat_tPtr;
typedef boost::shared_ptr< ::rtkrcv::sbssat_t const> sbssat_tConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rtkrcv::sbssat_t_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rtkrcv::sbssat_t_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rtkrcv

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rtkrcv::sbssat_t_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rtkrcv::sbssat_t_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rtkrcv::sbssat_t_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1c04284e2f92ed53fc55e7d63dfd1dc7";
  }

  static const char* value(const  ::rtkrcv::sbssat_t_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1c04284e2f92ed53ULL;
  static const uint64_t static_value2 = 0xfc55e7d63dfd1dc7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtkrcv::sbssat_t_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rtkrcv/sbssat_t";
  }

  static const char* value(const  ::rtkrcv::sbssat_t_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rtkrcv::sbssat_t_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# SBAS satellite corrections type\n\
\n\
int32 iodp               # IODP (issue of date mask)\n\
int32 nsat               # number of satellites\n\
int32 tlat               # system latency (s)\n\
sbssatp_t[] sat          # satellite correction\n\
================================================================================\n\
MSG: rtkrcv/sbssatp_t\n\
# SBAS satellite correction type\n\
\n\
int32 sat                                   # satellite number\n\
SbasFastCorrection fcorr                    # fast correction\n\
SbasLongTermErrorCorrection lcorr           # long term correction\n\
================================================================================\n\
MSG: rtkrcv/SbasFastCorrection\n\
# SBAS fast correction type\n\
\n\
time t0             # time of applicability (TOF)\n\
float64 prc         # pseudorange correction (PRC) (m)\n\
float64 rrc         # range-rate correction (RRC) (m/s)\n\
float64 dt          # range-rate correction delta-time (s)\n\
int32 iodf          # IODF (issue of date fast corr)\n\
int16 udre          # UDRE+1\n\
int16 ai            # degradation factor indicator\n\
================================================================================\n\
MSG: rtkrcv/SbasLongTermErrorCorrection\n\
# SBAS long term satellite error correction type\n\
\n\
time t0                        # correction time\n\
int32 iode                     # IODE (issue of date ephemeris)\n\
geometry_msgs/Vector3 dpos     # delta position (m) (ecef)\n\
geometry_msgs/Vector3 dvel     # delta velocity (m/s) (ecef)\n\
float64 daf0                   # delta clock-offset(s,s/s)\n\
float64 daf1s                  # delta drift (s,s/s)\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::rtkrcv::sbssat_t_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rtkrcv::sbssat_t_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.iodp);
    stream.next(m.nsat);
    stream.next(m.tlat);
    stream.next(m.sat);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct sbssat_t_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtkrcv::sbssat_t_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rtkrcv::sbssat_t_<ContainerAllocator> & v) 
  {
    s << indent << "iodp: ";
    Printer<int32_t>::stream(s, indent + "  ", v.iodp);
    s << indent << "nsat: ";
    Printer<int32_t>::stream(s, indent + "  ", v.nsat);
    s << indent << "tlat: ";
    Printer<int32_t>::stream(s, indent + "  ", v.tlat);
    s << indent << "sat[]" << std::endl;
    for (size_t i = 0; i < v.sat.size(); ++i)
    {
      s << indent << "  sat[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rtkrcv::sbssatp_t_<ContainerAllocator> >::stream(s, indent + "    ", v.sat[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // RTKRCV_MESSAGE_SBSSAT_T_H

