// Generated by gencpp from file lgsvl_msgs/Detection3DArray.msg
// DO NOT EDIT!


#ifndef LGSVL_MSGS_MESSAGE_DETECTION3DARRAY_H
#define LGSVL_MSGS_MESSAGE_DETECTION3DARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <lgsvl_msgs/Detection3D.h>

namespace lgsvl_msgs
{
template <class ContainerAllocator>
struct Detection3DArray_
{
  typedef Detection3DArray_<ContainerAllocator> Type;

  Detection3DArray_()
    : header()
    , detections()  {
    }
  Detection3DArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::lgsvl_msgs::Detection3D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::lgsvl_msgs::Detection3D_<ContainerAllocator> >::other >  _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> const> ConstPtr;

}; // struct Detection3DArray_

typedef ::lgsvl_msgs::Detection3DArray_<std::allocator<void> > Detection3DArray;

typedef boost::shared_ptr< ::lgsvl_msgs::Detection3DArray > Detection3DArrayPtr;
typedef boost::shared_ptr< ::lgsvl_msgs::Detection3DArray const> Detection3DArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lgsvl_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'lgsvl_msgs': ['/home/deepaktalwardt/Dropbox/SJSU/Semesters/Fall2019/CMPE256/Project/ros_workspace/src/lgsvl_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "463b7bf1d7d2ef45e33f14d3ed064e13";
  }

  static const char* value(const ::lgsvl_msgs::Detection3DArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x463b7bf1d7d2ef45ULL;
  static const uint64_t static_value2 = 0xe33f14d3ed064e13ULL;
};

template<class ContainerAllocator>
struct DataType< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lgsvl_msgs/Detection3DArray";
  }

  static const char* value(const ::lgsvl_msgs::Detection3DArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
Detection3D[] detections  # A list of 3D detections\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: lgsvl_msgs/Detection3D\n\
std_msgs/Header header\n\
uint32 id  # The numeric ID of the detected object\n\
string label  # car, pedestrian\n\
float32 score  # The confidence score of the detected object in the range [0-1]\n\
BoundingBox3D bbox  # A 3D bounding box\n\
geometry_msgs/Twist velocity  # Linear and angular velocity\n\
\n\
================================================================================\n\
MSG: lgsvl_msgs/BoundingBox3D\n\
geometry_msgs/Pose position  # 3D position and orientation of the bounding box center in Lidar space, in meters\n\
geometry_msgs/Vector3 size  # Size of the bounding box, in meters\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
";
  }

  static const char* value(const ::lgsvl_msgs::Detection3DArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Detection3DArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lgsvl_msgs::Detection3DArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lgsvl_msgs::Detection3DArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::lgsvl_msgs::Detection3D_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LGSVL_MSGS_MESSAGE_DETECTION3DARRAY_H
