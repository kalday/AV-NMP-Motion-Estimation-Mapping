// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_localization:srv/ToggleFilterProcessing.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_LOCALIZATION__SRV__DETAIL__TOGGLE_FILTER_PROCESSING__TRAITS_HPP_
#define ROBOT_LOCALIZATION__SRV__DETAIL__TOGGLE_FILTER_PROCESSING__TRAITS_HPP_

#include "robot_localization/srv/detail/toggle_filter_processing__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_localization::srv::ToggleFilterProcessing_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on: ";
    value_to_yaml(msg.on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_localization::srv::ToggleFilterProcessing_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_localization::srv::ToggleFilterProcessing_Request>()
{
  return "robot_localization::srv::ToggleFilterProcessing_Request";
}

template<>
inline const char * name<robot_localization::srv::ToggleFilterProcessing_Request>()
{
  return "robot_localization/srv/ToggleFilterProcessing_Request";
}

template<>
struct has_fixed_size<robot_localization::srv::ToggleFilterProcessing_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_localization::srv::ToggleFilterProcessing_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_localization::srv::ToggleFilterProcessing_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_localization::srv::ToggleFilterProcessing_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_localization::srv::ToggleFilterProcessing_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_localization::srv::ToggleFilterProcessing_Response>()
{
  return "robot_localization::srv::ToggleFilterProcessing_Response";
}

template<>
inline const char * name<robot_localization::srv::ToggleFilterProcessing_Response>()
{
  return "robot_localization/srv/ToggleFilterProcessing_Response";
}

template<>
struct has_fixed_size<robot_localization::srv::ToggleFilterProcessing_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_localization::srv::ToggleFilterProcessing_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_localization::srv::ToggleFilterProcessing_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_localization::srv::ToggleFilterProcessing>()
{
  return "robot_localization::srv::ToggleFilterProcessing";
}

template<>
inline const char * name<robot_localization::srv::ToggleFilterProcessing>()
{
  return "robot_localization/srv/ToggleFilterProcessing";
}

template<>
struct has_fixed_size<robot_localization::srv::ToggleFilterProcessing>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_localization::srv::ToggleFilterProcessing_Request>::value &&
    has_fixed_size<robot_localization::srv::ToggleFilterProcessing_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_localization::srv::ToggleFilterProcessing>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_localization::srv::ToggleFilterProcessing_Request>::value &&
    has_bounded_size<robot_localization::srv::ToggleFilterProcessing_Response>::value
  >
{
};

template<>
struct is_service<robot_localization::srv::ToggleFilterProcessing>
  : std::true_type
{
};

template<>
struct is_service_request<robot_localization::srv::ToggleFilterProcessing_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_localization::srv::ToggleFilterProcessing_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_LOCALIZATION__SRV__DETAIL__TOGGLE_FILTER_PROCESSING__TRAITS_HPP_
