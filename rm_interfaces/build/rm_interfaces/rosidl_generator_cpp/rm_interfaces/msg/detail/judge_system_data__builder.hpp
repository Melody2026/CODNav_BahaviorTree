// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/judge_system_data.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/judge_system_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_JudgeSystemData_operator_command
{
public:
  explicit Init_JudgeSystemData_operator_command(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::JudgeSystemData operator_command(::rm_interfaces::msg::JudgeSystemData::_operator_command_type arg)
  {
    msg_.operator_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_position_y
{
public:
  explicit Init_JudgeSystemData_position_y(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_operator_command position_y(::rm_interfaces::msg::JudgeSystemData::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return Init_JudgeSystemData_operator_command(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_position_x
{
public:
  explicit Init_JudgeSystemData_position_x(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_position_y position_x(::rm_interfaces::msg::JudgeSystemData::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_JudgeSystemData_position_y(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_zone_status
{
public:
  explicit Init_JudgeSystemData_zone_status(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_position_x zone_status(::rm_interfaces::msg::JudgeSystemData::_zone_status_type arg)
  {
    msg_.zone_status = std::move(arg);
    return Init_JudgeSystemData_position_x(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_dm_qs_hp
{
public:
  explicit Init_JudgeSystemData_dm_qs_hp(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_zone_status dm_qs_hp(::rm_interfaces::msg::JudgeSystemData::_dm_qs_hp_type arg)
  {
    msg_.dm_qs_hp = std::move(arg);
    return Init_JudgeSystemData_zone_status(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_game_progress
{
public:
  explicit Init_JudgeSystemData_game_progress(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_dm_qs_hp game_progress(::rm_interfaces::msg::JudgeSystemData::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_JudgeSystemData_dm_qs_hp(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_game_type
{
public:
  explicit Init_JudgeSystemData_game_type(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_game_progress game_type(::rm_interfaces::msg::JudgeSystemData::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_JudgeSystemData_game_progress(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_stage_remain_time
{
public:
  explicit Init_JudgeSystemData_stage_remain_time(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_game_type stage_remain_time(::rm_interfaces::msg::JudgeSystemData::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_JudgeSystemData_game_type(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_friendly_supply_non_zone_exchange
{
public:
  explicit Init_JudgeSystemData_friendly_supply_non_zone_exchange(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_stage_remain_time friendly_supply_non_zone_exchange(::rm_interfaces::msg::JudgeSystemData::_friendly_supply_non_zone_exchange_type arg)
  {
    msg_.friendly_supply_non_zone_exchange = std::move(arg);
    return Init_JudgeSystemData_stage_remain_time(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_center_gain_point
{
public:
  explicit Init_JudgeSystemData_center_gain_point(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_friendly_supply_non_zone_exchange center_gain_point(::rm_interfaces::msg::JudgeSystemData::_center_gain_point_type arg)
  {
    msg_.center_gain_point = std::move(arg);
    return Init_JudgeSystemData_friendly_supply_non_zone_exchange(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_current_hp
{
public:
  explicit Init_JudgeSystemData_current_hp(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_center_gain_point current_hp(::rm_interfaces::msg::JudgeSystemData::_current_hp_type arg)
  {
    msg_.current_hp = std::move(arg);
    return Init_JudgeSystemData_center_gain_point(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_qs_hp
{
public:
  explicit Init_JudgeSystemData_qs_hp(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_current_hp qs_hp(::rm_interfaces::msg::JudgeSystemData::_qs_hp_type arg)
  {
    msg_.qs_hp = std::move(arg);
    return Init_JudgeSystemData_current_hp(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_shut_num
{
public:
  explicit Init_JudgeSystemData_shut_num(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_qs_hp shut_num(::rm_interfaces::msg::JudgeSystemData::_shut_num_type arg)
  {
    msg_.shut_num = std::move(arg);
    return Init_JudgeSystemData_qs_hp(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_hp
{
public:
  explicit Init_JudgeSystemData_hp(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_shut_num hp(::rm_interfaces::msg::JudgeSystemData::_hp_type arg)
  {
    msg_.hp = std::move(arg);
    return Init_JudgeSystemData_shut_num(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_is_lowpower
{
public:
  explicit Init_JudgeSystemData_is_lowpower(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_hp is_lowpower(::rm_interfaces::msg::JudgeSystemData::_is_lowpower_type arg)
  {
    msg_.is_lowpower = std::move(arg);
    return Init_JudgeSystemData_hp(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_outpost_hp
{
public:
  explicit Init_JudgeSystemData_outpost_hp(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_is_lowpower outpost_hp(::rm_interfaces::msg::JudgeSystemData::_outpost_hp_type arg)
  {
    msg_.outpost_hp = std::move(arg);
    return Init_JudgeSystemData_is_lowpower(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_blood
{
public:
  explicit Init_JudgeSystemData_blood(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_outpost_hp blood(::rm_interfaces::msg::JudgeSystemData::_blood_type arg)
  {
    msg_.blood = std::move(arg);
    return Init_JudgeSystemData_outpost_hp(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_remaining_time
{
public:
  explicit Init_JudgeSystemData_remaining_time(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_blood remaining_time(::rm_interfaces::msg::JudgeSystemData::_remaining_time_type arg)
  {
    msg_.remaining_time = std::move(arg);
    return Init_JudgeSystemData_blood(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_game_status
{
public:
  Init_JudgeSystemData_game_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JudgeSystemData_remaining_time game_status(::rm_interfaces::msg::JudgeSystemData::_game_status_type arg)
  {
    msg_.game_status = std::move(arg);
    return Init_JudgeSystemData_remaining_time(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::JudgeSystemData>()
{
  return rm_interfaces::msg::builder::Init_JudgeSystemData_game_status();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__BUILDER_HPP_
