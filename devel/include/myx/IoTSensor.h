// Generated by gencpp from file myx/IoTSensor.msg
// DO NOT EDIT!


#ifndef MYX_MESSAGE_IOTSENSOR_H
#define MYX_MESSAGE_IOTSENSOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace myx
{
template <class ContainerAllocator>
struct IoTSensor_
{
  typedef IoTSensor_<ContainerAllocator> Type;

  IoTSensor_()
    : id(0)
    , name()
    , temp(0.0)
    , humitidy(0.0)  {
    }
  IoTSensor_(const ContainerAllocator& _alloc)
    : id(0)
    , name(_alloc)
    , temp(0.0)
    , humitidy(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef float _temp_type;
  _temp_type temp;

   typedef float _humitidy_type;
  _humitidy_type humitidy;





  typedef boost::shared_ptr< ::myx::IoTSensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::myx::IoTSensor_<ContainerAllocator> const> ConstPtr;

}; // struct IoTSensor_

typedef ::myx::IoTSensor_<std::allocator<void> > IoTSensor;

typedef boost::shared_ptr< ::myx::IoTSensor > IoTSensorPtr;
typedef boost::shared_ptr< ::myx::IoTSensor const> IoTSensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::myx::IoTSensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::myx::IoTSensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::myx::IoTSensor_<ContainerAllocator1> & lhs, const ::myx::IoTSensor_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.name == rhs.name &&
    lhs.temp == rhs.temp &&
    lhs.humitidy == rhs.humitidy;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::myx::IoTSensor_<ContainerAllocator1> & lhs, const ::myx::IoTSensor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace myx

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::myx::IoTSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myx::IoTSensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::myx::IoTSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::myx::IoTSensor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myx::IoTSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myx::IoTSensor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::myx::IoTSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cd6a2d931f3e08a1ac57aead0de6b077";
  }

  static const char* value(const ::myx::IoTSensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcd6a2d931f3e08a1ULL;
  static const uint64_t static_value2 = 0xac57aead0de6b077ULL;
};

template<class ContainerAllocator>
struct DataType< ::myx::IoTSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "myx/IoTSensor";
  }

  static const char* value(const ::myx::IoTSensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::myx::IoTSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"string name\n"
"float32 temp\n"
"float32 humitidy\n"
"\n"
;
  }

  static const char* value(const ::myx::IoTSensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::myx::IoTSensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.name);
      stream.next(m.temp);
      stream.next(m.humitidy);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IoTSensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::myx::IoTSensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::myx::IoTSensor_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "temp: ";
    Printer<float>::stream(s, indent + "  ", v.temp);
    s << indent << "humitidy: ";
    Printer<float>::stream(s, indent + "  ", v.humitidy);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MYX_MESSAGE_IOTSENSOR_H
