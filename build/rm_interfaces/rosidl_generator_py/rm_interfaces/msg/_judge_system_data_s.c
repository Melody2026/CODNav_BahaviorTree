// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rm_interfaces/msg/detail/judge_system_data__struct.h"
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"

bool rm_interfaces__msg__operator_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_interfaces__msg__operator_command__convert_to_py(void * raw_ros_message);
bool rm_interfaces__msg__point2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_interfaces__msg__point2d__convert_to_py(void * raw_ros_message);
bool rm_interfaces__msg__point2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_interfaces__msg__point2d__convert_to_py(void * raw_ros_message);
bool rm_interfaces__msg__point2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_interfaces__msg__point2d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rm_interfaces__msg__judge_system_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rm_interfaces.msg._judge_system_data.JudgeSystemData", full_classname_dest, 52) == 0);
  }
  rm_interfaces__msg__JudgeSystemData * ros_message = _ros_message;
  {  // game_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remaining_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_time = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // blood
    PyObject * field = PyObject_GetAttrString(_pymsg, "blood");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blood = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->outpost_hp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_lowpower
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_lowpower");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_lowpower = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // shut_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "shut_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shut_num = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // qs_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "qs_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->qs_hp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // current_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_hp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // center_gain_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_gain_point");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->center_gain_point = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // friendly_supply_non_zone_exchange
    PyObject * field = PyObject_GetAttrString(_pymsg, "friendly_supply_non_zone_exchange");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->friendly_supply_non_zone_exchange = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stage_remain_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "stage_remain_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stage_remain_time = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // game_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // game_progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_progress");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_progress = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dm_qs_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "dm_qs_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dm_qs_hp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // zone_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "zone_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->zone_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // operator_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "operator_command");
    if (!field) {
      return false;
    }
    if (!rm_interfaces__msg__operator_command__convert_from_py(field, &ros_message->operator_command)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heroposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "heroposition");
    if (!field) {
      return false;
    }
    if (!rm_interfaces__msg__point2d__convert_from_py(field, &ros_message->heroposition)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // standard_3position
    PyObject * field = PyObject_GetAttrString(_pymsg, "standard_3position");
    if (!field) {
      return false;
    }
    if (!rm_interfaces__msg__point2d__convert_from_py(field, &ros_message->standard_3position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // standard_4position
    PyObject * field = PyObject_GetAttrString(_pymsg, "standard_4position");
    if (!field) {
      return false;
    }
    if (!rm_interfaces__msg__point2d__convert_from_py(field, &ros_message->standard_4position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_interfaces__msg__judge_system_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JudgeSystemData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_interfaces.msg._judge_system_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JudgeSystemData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_interfaces__msg__JudgeSystemData * ros_message = (rm_interfaces__msg__JudgeSystemData *)raw_ros_message;
  {  // game_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->game_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->remaining_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blood
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->blood);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blood", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_lowpower
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->is_lowpower);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_lowpower", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shut_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->shut_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shut_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qs_hp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->qs_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qs_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_gain_point
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->center_gain_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_gain_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // friendly_supply_non_zone_exchange
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->friendly_supply_non_zone_exchange);
    {
      int rc = PyObject_SetAttrString(_pymessage, "friendly_supply_non_zone_exchange", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stage_remain_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stage_remain_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stage_remain_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->game_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_progress
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->game_progress);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dm_qs_hp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dm_qs_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dm_qs_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zone_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->zone_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zone_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operator_command
    PyObject * field = NULL;
    field = rm_interfaces__msg__operator_command__convert_to_py(&ros_message->operator_command);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "operator_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heroposition
    PyObject * field = NULL;
    field = rm_interfaces__msg__point2d__convert_to_py(&ros_message->heroposition);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heroposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standard_3position
    PyObject * field = NULL;
    field = rm_interfaces__msg__point2d__convert_to_py(&ros_message->standard_3position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "standard_3position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standard_4position
    PyObject * field = NULL;
    field = rm_interfaces__msg__point2d__convert_to_py(&ros_message->standard_4position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "standard_4position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
