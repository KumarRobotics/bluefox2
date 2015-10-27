//-----------------------------------------------------------------------------
#ifndef mvPropHandlingDatatypesH
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#define mvPropHandlingDatatypesH mvPropHandlingDatatypesH
#endif // DOXYGEN_SHOULD_SKIP_THIS && WRAP_ANY
//-----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)
namespace mvIMPACT
{
namespace acquire
{
#endif // #if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)

#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
typedef __int64 int64_type;
typedef unsigned __int64 uint64_type;
#       ifdef __BORLANDC__ // is Borland compiler?
#           pragma option push -b // force enums to the size of integer
#       endif // __BORLANDC__
#   elif defined(linux) || defined(__linux) || defined(__linux__)
#       include <stdint.h>
typedef int64_t int64_type;
typedef uint64_t uint64_type;
#   else
#       error "unsupported target environment"
#   endif // #if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#endif // DOXYGEN_SHOULD_SKIP_THIS && WRAP_ANY

//=============================================================================
//========================= constants =========================================
//=============================================================================
#ifdef __cplusplus
/// \brief A constant to check for a invalid ID returned from the property handling module.
const int INVALID_ID                      = -1;
#   ifndef DOXYGEN_CPP_DOCUMENTATION
// property limits
/// \brief The index value to query the minimum value defined for this property.
const int PROP_MAX_VAL                    = -1;
/// \brief The index value to query the maximum value defined for this property.
const int PROP_MIN_VAL                    = -2;
/// \brief The index value to query the step width value defined for this property.
const int PROP_STEP_WIDTH                 = -3;
#       ifndef DOXYGEN_SHOULD_SKIP_THIS
const int PROP_DEFAULT_VALUE          = -4;
const int PROP_MAX_BINARY_BUFFER_SIZE = -5;
const int PROP_LAST_CONSTANT          = PROP_MAX_BINARY_BUFFER_SIZE;
#       endif // #ifdef DOXYGEN_SHOULD_SKIP_THIS
/// \brief Defines a default length for a string buffer.
/**
 *  The default max. length of a string returned by a call to functions, which
 *  call the C-layer and need to pass an allocated string buffer to that function.
 */
const unsigned int DEFAULT_STRING_SIZE_LIMIT   = 8192;
/// \brief A constant defining the unique identifier for the root component list containing all other lists.
const int ROOT_LIST                   = 0;
#   endif // DOXYGEN_CPP_DOCUMENTATION
/// \brief A constant defining that property values will be read from an array property until the last value.
const int END_OF_LIST                              = -1;
// flags to define the search mode
/// \brief When set lists are not taken into account during a search.
/**
 *  When this flag is set list objects will not be taken into
 *  account during a search for a component.
 */
const unsigned int smIgnoreLists                    = 0x2;
/// \brief When set method objects are not taken into account during a search.
/**
 *  When this flag is set method objects will not be taken into
 *  account during a search for a component.
 */
const unsigned int smIgnoreMethods                  = 0x4;
/// \brief When set property objects are not taken into account during a search.
/**
 *  When this flag is set property objects will not be taken into
 *  account during a search for a component.
 */
const unsigned int smIgnoreProperties               = 0x8;
#else // C compatible set of constants
#   ifndef DOXYGEN_SHOULD_SKIP_THIS
#       define INVALID_ID (-1)
#       define PROP_MAX_VAL (-1)
#       define PROP_MIN_VAL (-2)
#       define PROP_STEP_WIDTH (-3)
#       define PROP_DEFAULT_VALUE (-4)
#       define PROP_MAX_BINARY_BUFFER_SIZE (-5)
#       define PROP_LAST_CONSTANT (PROP_MAX_BINARY_BUFFER_SIZE)
#       define DEFAULT_STRING_SIZE_LIMIT (8192)
#       define END_OF_LIST (-1)
#       define ROOT_LIST (0)
#       define smIgnoreLists (0x2)
#       define smIgnoreMethods (0x4)
#       define smIgnoreProperties (0x8)
#   endif // DOXYGEN_SHOULD_SKIP_THIS
#endif // #ifdef __cplusplus

//=============================================================================
//========================= enumerations ======================================
//=============================================================================
//-----------------------------------------------------------------------------
/// \brief Defines the type of callback to register.
/// \ingroup CommonInterface
enum TCallbackType
//-----------------------------------------------------------------------------
{
    /// \brief Execute callback whenever this component has been modified.
    ctOnChanged = 0,
    /// \brief Executed when a properties value is read. The callback is executed before the value is returned to the user. This allows i.e. a driver to determine the value for this property only if the user is interested in its data.
    ctOnReadData = 1,
    /// \brief Executed when a properties value is written. The callback is executed before the value is actually assigned. This allows i.e. a driver to validate if this is a valid value for the property.
    ctOnWriteData = 2
};

//-----------------------------------------------------------------------------
/// \enum TComponentFlag
/// \brief Flags defining access rights and other component properties
/**
 *  Flags defining access rights and other component properties
 */
/// \ingroup CommonInterface
enum TComponentFlag // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief This is used to define an inconsistent/invalid flag.
    /**
     *  This e.g. can be used as a return value for a function, that could not
     *  calculate a valid flag mask.
     */
    cfUndefined = 0x0,
    /// \brief This component can be accessed for reading.
    /**
     *  If this flag is set this component can be accessed for reading. This
     *  involves reading a property's data, reading a component list's elements
     *  reading the size of a component list and so on.
     */
    cfReadAccess = 0x1,
    /// \brief This component can be accessed for writing.
    /**
     *  If this flag is set this component can be accessed for writing or modifying its data.
     *  This involves writing values to a property, adding components to a list and so on.
     */
    cfWriteAccess = 0x2,
    /// \brief This component can be accessed for both reading and writing.
    /**
     *  This just combines <b>mvIMPACT::acquire::cfReadAccess</b> and
     *  <b>mvIMPACT::acquire::cfWriteAccess</b>
     */
    cfRWAccess = cfReadAccess | cfWriteAccess,
    /// \brief This components element count can be modified.
    /**
     *  If this flag is set this components element count can't be modified. For a list this would mean,
     *  that the number of elements stored in this list can't be modified. For a property this means,
     *  that the number of values stored in the property can't be modified.
     */
    cfFixedSize = 0x4,
    /// \brief The component uses memory managed by the caller.
    /**
     *  If this flag is set this component uses user allocated memory for data storage (only implemented for
     *  properties). If this is the case the property behaves slightly different:
     *  - cloning still uses the same memory for property values instead of making its own copy
     *    of the values
     *  - a string property can't be assigned using other types like int or float.
     *  - if a property is not \e <b>mvIMPACT::acquire::cfFixedSize</b> and is assigned a different
     *    number of values no check for sufficient memory is performed and <b>NO</b> new memory is allocated.
     *  - the memory used by the property is never free, moved or modified in size by the property.
     *    At all times the user is responsible for this.
     *
     *  \note
     *  If this flag is specified for a component, which is not a property, it will have no
     *  effect on the behaviour of the component.
     */
    cfUserAllocatedMemory = 0x8,
    /// \brief The component is shadowed by other settings currently if set.
    /**
     *  This flag is used to specify that this component currently has no effect on the behaviour
     *  of the system. This flag is just meant as a hint for the user. The property module
     *  itself does <b>NOT</b> use this flag for anything.
     */
    cfInvisible = 0x10,
    /// \brief Allows combinations of translation dictionary entry as valid values.
    /**
     *  If this flag is set for a property that defines a translation dictionary not
     *  only values, which are registered in the translation dictionary are allowed
     *  values for this property, but also values logical OR-ed together with values from
     *  the translation dictionary (these obviously can't be set as strings).
     *
     *  A property defines two entries ("one", 1) and ("two", 2) then 1 | 2 = 3 will be a
     *  valid value as well, but "three" obviously won't.
     *
     *  In a GUI application a property specifying this flag should be displayed
     *  as a set of check-box controls (one for each dictionary entry) or something
     *  similar.
     *
     *  \note
     *  If this flag is specified for a component, which is not a property, it will have no
     *  effect on the behaviour of the component. Only integer properties can use this feature
     */
    cfAllowValueCombinations = 0x20,
    /// \brief Informs a displaying GUI that this component should be displayed as a list.
    /**
     *  This flag e.g. can be set for an array property to inform a displaying GUI, that
     *  this property is best displayed as a list with a entry for each element.
     *  This flag is just meant as a hint for the user. The property module
     *  itself does <b>NOT</b> use this flag for anything.
     */
    cfShouldBeDisplayedAsList = 0x40,
    /// \brief If set this component or derived components can't be stored as external data.
    cfDisallowSerialize = 0x80,
    /// \brief If set this component is always cloned completely.
    /**
     *  This results in the component being completely independent from its parent no matter
     *  whether it has been built while deriving or cloning a list and thus the components
     *  within this list and its sub-lists.
     *
     *  This will change the behaviour to that effect that changing the parent component
     *  will no longer affect the 'derived' component. However this allows to define
     *  different default values, constants and translation dictionaries for properties
     *  within an inheritance hierarchy.
     *
     *  \note
     *  This feature is currently only supported for components of type
     *  <b>mvIMPACT::acquire::ctPropInt</b>, <b>mvIMPACT::acquire::ctPropInt64</b>
     *  and <b>mvIMPACT::acquire::ctPropFloat</b>.
     */
    cfAlwaysForceClone = 0x100,
    /// \brief If set, this component is currently not available due to the setting of another feature.
    /**
     *  In this case this feature can't be written to nor can it be read.
     */
    cfNotAvailable = 0x200,
    /// \brief If set, this feature has been defined, but so far has not been implemented.
    cfNotImplemented = 0x400,
    /// \brief Specifies a property, which contains binary data.
    /**
     *  This flag is used to specify a property that contains data in binary format
     */
    cfContainsBinaryData = 0x800,
    /// \brief Informs a displaying GUI that this component should be displayed as an enumeration(e.g. with a combo box).
    /**
     *  This flag e.g. can be set for a property to inform a displaying GUI, that
     *  this property is best displayed as a combo box or something similar.
     *  This flag is just meant as a hint for the user. The property module
     *  itself does <b>NOT</b> use this flag for anything.
     */
    cfShouldBeDisplayedAsEnumeration = 0x1000,
    /// \brief This feature will \b ALWAYS execute internal update callbacks and will treat each write attempt to this feature as a value different from the current one.
    cfAlwaysForceUpdate = 0x2000
#ifndef DOXYGEN_SHOULD_SKIP_THIS
                          , cfLast = cfShouldBeDisplayedAsEnumeration
#endif // DOXYGEN_SHOULD_SKIP_THIS
};

//-----------------------------------------------------------------------------
/// \brief Allowed values types for property objects
/// \ingroup CommonInterface
enum TValueType // flags_attribute, uint_type, internal_attribute
//-----------------------------------------------------------------------------
{
    /// \brief Defines a property for 32 bit integer types.
    vtInt = 0x1,
    /// \brief Defines a property for float types.
    vtFloat,
    /// \brief Defines a property for pointer types.
    vtPtr,
    /// \brief Defines a property for strings.
    vtString,
    /// \brief Defines a property for 64 bit integer types.
    vtInt64
};

//-----------------------------------------------------------------------------
/// \brief Allowed components handled by this module.
/**
 *  This module can handle the types listed in this enumeration only.
 */
/// \ingroup CommonInterface
enum TComponentType // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief A property type.
    /**
     *  This type will never occur in a real world application. It's just used
     *  to build up the other types. Properties can be used to store user specific
     *  data in a structured way.
     */
    ctProp = 0x00010000,
    /// \brief A list object.
    /**
     *  Lists can contain other components like lists, methods and properties.
     *  Thus lists can be used to build up hierarchical structures of different
     *  components.
     */
    ctList = 0x00020000,
    /// \brief A method object.
    /**
     *  Method objects provide the possibility to organise functions in lists.
     */
    ctMeth = 0x00040000,
    /// \brief Defines a property for 32 bit integer values.
    ctPropInt = ctProp | vtInt, // dot_net_code:ctPropInt = ctProp | TValueType.vtInt,
    /// \brief Defines a property for floating point values.
    ctPropFloat = ctProp | vtFloat, // dot_net_code:ctPropFloat = ctProp | TValueType.vtFloat,
    /// \brief Defines a property for string values.
    ctPropString = ctProp | vtString, // dot_net_code:ctPropString = ctProp | TValueType.vtString,
    /// \brief Defines a property for pointer values.
    ctPropPtr = ctProp | vtPtr, // dot_net_code:ctPropPtr = ctProp | TValueType.vtPtr,
    /// \brief Defines a property for 64 bit integer values.
    ctPropInt64 = ctProp | vtInt64 // dot_net_code:ctPropInt64 = ctProp | TValueType.vtInt64
};

//-----------------------------------------------------------------------------
/// \brief Defines valid recommended visibilities for features.
/**
 *  These visibilities can be used to create GUIs in which the user can select the
 *  amount of features he wants to access.
 */
/// \ingroup CommonInterface
enum TComponentVisibility
//-----------------------------------------------------------------------------
{
    /// \brief Defines a feature that should be visible for all users via the GUI and API. This is the default visibility if no visibility has been specified for a particular component.
    cvBeginner = 0,
    /// \brief Defines a feature that requires a more in-depth knowledge of the functionality. This is the preferred visibility level for all advanced features.
    cvExpert = 1,
    /// \brief Defines an advanced feature that if not configured correctly might result in unexpected behaviour.
    cvGuru = 2,
    /// \brief Defines a feature that should not be displayed in a GUI but is still accessible via API function calls.
    cvInvisible = 3
};

//-----------------------------------------------------------------------------
/// \brief Error codes of the module handling everything related to properties.
/// \ingroup CommonInterface
enum TPROPHANDLING_ERROR
//-----------------------------------------------------------------------------
{
    /// \brief The operation has been executed successfully.
    /**
     *  \b [0]
     */
    PROPHANDLING_NO_ERROR = 0,
    /// \brief This component is not a list.
    /**
     *  A list operation for this component has been called but this
     *  component does not reference a list.
     *
     *  \b [-2000]
     */
    PROPHANDLING_NOT_A_LIST = -2000,
    /// \brief This component is not a property.
    /**
     *  A property operation for this component has been called but
     *  this component does not reference a property.
     *
     *  \b [-2001]
     */
    PROPHANDLING_NOT_A_PROPERTY = -2001,
    /// \brief This component is not a method.
    /**
     *  A method operation for this component has been called but
     *  this component does not reference a method.
     *
     *  \b [-2002]
     */
    PROPHANDLING_NOT_A_METHOD = -2002,
    /// \brief The caller has no read rights for this component.
    /**
     *  It has been tried to read data from this component, but the
     *  caller has no read rights for this component.
     *
     * \b [-2003]
     */
    PROPHANDLING_NO_READ_RIGHTS = -2003,
    /// \brief The caller has no write rights for this component.
    /**
     *  It has been tried to modify data of this component, but the
     *  caller has no write rights for this component.
     *
     *  \b [-2004]
     */
    PROPHANDLING_NO_WRITE_RIGHTS = -2004,
    /// \brief The caller can't modify the size of this component.
    /**
     *  It has been tried to modify the size of this list or
     *  the number of values stored by a property, but the caller doesn't
     *  have the required right to do this.
     *
     *  This error will also be reported if the user tried to increase
     *  the number of values handled by a property above the maximum number
     *  of values it can handle. Therefore before resizing a property
     *  check if the new size might exceeds this maximum value by calling
     *  the appropriate function.
     *
     *  \b [-2005]
     */
    PROPHANDLING_NO_MODIFY_SIZE_RIGHTS = -2005,
    /// \brief The two involved components are not compatible.
    /**
     *  An operation requiring two compatible components has been
     *  called with two components, which are not compatible.
     *
     *  \b [-2006]
     */
    PROPHANDLING_INCOMPATIBLE_COMPONENTS = -2006,
    /// \brief This property doesn't use user defined memory.
    /**
     *  The caller tried to relocate the user defined memory for a property,
     *  that doesn't reference user defined memory but uses the internal memory
     *  management.
     *
     *  \b [-2007]
     */
    PROPHANDLING_NO_USER_ALLOCATED_MEMORY = -2007,
    /// \brief One or more of the specified parameters are not supported by the function.
    /**
     *  \b [-2008]
     */
    PROPHANDLING_UNSUPPORTED_PARAMETER = -2008,
    /// \brief Different sized value buffers have been passed.
    /**
     *  While trying to read value pairs the caller passed two different
     *  sized value buffers to a function while one is too small to hold
     *  all the information.
     *
     *  \b [-2009]
     */
    PROPHANDLING_SIZE_MISMATCH = -2009,
    /// \brief A feature that is not implemented so far has been requested.
    /**
     *  The caller requested a feature, that hasn't been implemented so
     *  far. This error code is only provided for compatibility and will be
     *  set in very rare cases only.
     *
     *  \b [-2010]
     */
    PROPHANDLING_IMPLEMENTATION_MISSING = -2010,
    /// \brief An access token object couldn't be created.
    /**
     *  This can either happen, because the caller has not the rights required
     *  to create an access token or because the system runs very low on memory.
     *
     *  \b [-2011]
     */
    PROPHANDLING_ACCESSTOKEN_CREATION_FAILED = -2011,
    /// \brief It has been tried to assign an invalid value to a property.
    /**
     *  This can either happen if the value lies above or below the
     *  min. or max. value for a property or when it has been tried to
     *  write a value to a property, which is not in the properties translation
     *  dictionary (if it defines one).
     *
     *  To find out, which values are allowed for the property in question
     *  the user should
     *
     *  - check if the property defines a translation dictionary
     *  - check the allowed values within a translation dictionary if one is defined
     *  - check the min and max value for properties, that define limits
     *
     *  \b [-2012]
     */
    PROPHANDLING_INVALID_PROP_VALUE = -2012,
    /// \brief The properties translation table has been corrupted.
    /**
     *  The properties translation table has been corrupted for an unknown
     *  reason and can't be used anymore.
     *
     *  \b [-2013]
     */
    PROPHANDLING_PROP_TRANSLATION_TABLE_CORRUPTED = -2013,
    /// \brief Invalid value index.
    /**
     *  The caller tried to read a value from an invalid index from a property.
     *  Most properties store one value only, thus the only valid positive value
     *  index will be 0 (some negative index values are reserved for special
     *  values like e.g. the min/max value of a property). However some properties
     *  might store more than one value, thus the max. allowed index might
     *  be higher. The highest index allowed will always be the value count
     *  of a property minus one for properties with the <b>mvIMPACT::acquire::cfFixedSize</b>
     *  flag set. Other properties will automatically adjust the size once the user
     *  writes to an index out of bounds.
     *
     *  \b [-2014]
     */
    PROPHANDLING_PROP_VAL_ID_OUT_OF_BOUNDS = -2014,
    /// \brief This property doesn't define a translation table.
    /**
     *  The caller tried to modify a translation table, that hasn't been
     *  defined for this property.
     *
     *  \b [-2015]
     */
    PROPHANDLING_PROP_TRANSLATION_TABLE_NOT_DEFINED = -2015,
    /// \brief An invalid value has been passed to the property.
    /**
     *  Although properties are quite tolerant regarding the allowed assignment
     *  for them some value types can't be used to write all properties.
     *  As an example assigning a float value to an integer property would
     *  result in this error.
     *
     *  Another reason for this error might be when a user tried to access e.g. a
     *  float property with functions meant to be used for int properties.
     *
     *  \b [-2016]
     */
    PROPHANDLING_INVALID_PROP_VALUE_TYPE = -2016,
    /// \brief A too large value has been passed.
    /**
     *  One or more of the values the caller tried to write to the
     *  property are larger than the max. allowed value for this property.
     *
     *  \b [-2017]
     */
    PROPHANDLING_PROP_VAL_TOO_LARGE = -2017,
    /// \brief A too small value has been passed.
    /**
     *  One or more of the values the caller tried to write to the
     *  property are smaller than the min. allowed value for this property.
     *
     *  \b [-2018]
     */
    PROPHANDLING_PROP_VAL_TOO_SMALL = -2018,
    /// \brief The specified component could not be found.
    /**
     *  \b [-2019]
     */
    PROPHANDLING_COMPONENT_NOT_FOUND = -2019,
    /// \brief An invalid list has been referenced.
    /**
     *  \b [-2020]
     */
    PROPHANDLING_LIST_ID_INVALID = -2020,
    /// \brief An invalid component within a list has been referenced.
    /**
     *  \b [-2021]
     */
    PROPHANDLING_COMPONENT_ID_INVALID = -2021,
    /// \brief The specified list index is occupied.
    /**
     *  During the creation of a new component the caller tried
     *  the insert the newly created component into a list at a position
     *  already used to store another component.
     *
     *  \b [-2022]
     */
    PROPHANDLING_LIST_ENTRY_OCCUPIED = -2022,
    /// \brief The specified component already has an owner.
    /**
     *  The caller tried to assign an owner to a component that
     *  already has an owner. An owner once defined can't be modified
     *  anymore.
     *
     *  \b [-2023]
     */
    PROPHANDLING_COMPONENT_HAS_OWNER_ALREADY = -2023,
    /// \brief It has been tried to register the same component at twice in the same list.
    /**
     *  \b [-2024]
     */
    PROPHANDLING_COMPONENT_ALREADY_REGISTERED = -2024,
    /// \brief The desired data can't be accessed or found.
    /**
     *  During loading or saving data this error can occur e.g.
     *  if it has been tried to import a setting from a location where
     *  the desired setting couldn't be found.
     *
     *  \b [-2025]
     */
    PROPHANDLING_LIST_CANT_ACCESS_DATA = -2025,
    /// \brief The function pointer of the referenced method object is invalid.
    /**
     *  \b [-2026]
     */
    PROPHANDLING_METHOD_PTR_INVALID = -2026,
    /// \brief A method object has an invalid parameter list.
    /**
     *  \b [-2027]
     */
    PROPHANDLING_METHOD_INVALID_PARAM_LIST = -2027,
    /// \brief This indicates an internal error occurred within the SWIG generated wrapper code, when working under Python.
    /**
     *  \b [-2028]
     */
    PROPHANDLING_SWIG_ERROR = -2028,
    /// \brief A invalid input parameter has been passed to a function of this module.
    /**
     *  In most cases this might be a unassigned pointer, where a valid pointer
     *  to a user defined storage location was expected.
     *
     *  \b [-2029]
     */
    PROPHANDLING_INVALID_INPUT_PARAMETER = -2029,
    /// \brief The user tried to modify a registered callback, but no callback has been registered for this component.
    /**
     *  \b [-2030]
     */
    PROPHANDLING_COMPONENT_NO_CALLBACK_REGISTERED = -2030,
    /// \brief The user tried to read data into a user supplied storage location, but the buffer was too small to accommodate the result.
    /**
     *  \b [-2031]
     */
    PROPHANDLING_INPUT_BUFFER_TOO_SMALL = -2031,
    /// \brief The number of parameters is incorrect.
    /**
     *  This error might occur if the user called a function with a variable number of input or output
     *  parameters and the number of parameters passed to the function does not match the
     *  number of required parameters.
     *
     *  \b [-2032]
     */
    PROPHANDLING_WRONG_PARAM_COUNT = -2032,
    /// \brief The user tried to execute an operation, which is not supported by the component he is referring to.
    /**
     *  \b [-2033]
     */
    PROPHANDLING_UNSUPPORTED_OPERATION = -2033,
    /// \brief The user tried to save(serialize) a property list without having the right to do this.
    /**
     *  \b [-2034]
     */
    PROPHANDLING_CANT_SERIALIZE_DATA = -2034,
    /// \brief The user tried to use a file to update or create a component list, that does not contain valid data for this operation.
    /**
     *  This e.g. might happen, if the file does not contain valid XML data or XML data that is not
     *  well formed.
     *
     *  \b [-2035]
     */
    PROPHANDLING_INVALID_FILE_CONTENT = -2035,
    /// \brief This error will occur when the modules internal representation of the tree structure does not allow the allocation of a new list.
    /**
     *  In this case either new list can't be allocated. The only way to solve this problem is to delete
     *  another list.
     *
     *  \b [-2036]
     */
    PROPHANDLING_CANT_ALLOCATE_LIST = -2036,
    /// \brief The referenced list has no space left to register this component at the desired position.
    /**
     *  There might however be an empty space within the list where this element could be registered, but
     *  no more components can be registered at the end of this list.
     *
     *  \b [-2037]
     */
    PROPHANDLING_CANT_REGISTER_COMPONENT = -2037,
    /// \brief The user tried to assign a value to a property, that is invalid.
    /**
     *  This will result in a detailed error message in the log-file. This error might
     *  arise e.g. when a string property doesn't allow the string to contain numbers. In this
     *  case trying to set the properties value to 'blabla7bla' would cause this error.
     *
     *  \b [-2038]
     */
    PROPHANDLING_PROP_VALIDATION_FAILED = -2038,
    // If new error codes must be added this happens HERE!
    // When adding a new value here NEVER forget to update the internal string AND exception table!
#ifndef DOXYGEN_SHOULD_SKIP_THIS
    /// \brief Needed for compile time checks for invalid error code values
    PROPHANDLING_PSEUDO_LAST_ASSIGNED_ERROR_CODE,
    /// \brief A dummy constant to mark the last error code currently defined for property module related errors.
    PROPHANDLING_LAST_ASSIGNED_ERROR_CODE = PROPHANDLING_PSEUDO_LAST_ASSIGNED_ERROR_CODE - 2,
#endif // #ifdef DOXYGEN_SHOULD_SKIP_THIS
    /// \brief Defines the last valid error code value for the property module.
    /**
     *  \b [-2099]
     */
    PROPHANDLING_LAST_VALID_ERROR_CODE = -2099
};

//-----------------------------------------------------------------------------
/// \brief Defines the way component lists are imported and exported.
/**
 *  Component lists can be imported and exported from/to XML files and
 *  (under Windows&copy;) from/into the Registry. These flags define how
 *  this is done.
 */
/// \ingroup CommonInterface
enum TStorageFlag // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief A dummy flag to specify the default behaviour.
    /**
     *  Store/load operations will done in XML format in this case.
     */
    sfDefault = 0x0,
    /// \brief Stores/loads the setting in/from a platform dependent location
    /**
     *  Under Windows&copy; the Registry will be used to as a platform dependent location, while under
     *  other platforms an XML file will be processed in the path specified as the settings name.
     *
     *  \note
     *  Please note, that using this flag will introduce platform dependency. E.g. specifying this flag
     *  under Linux will process XML data, while under Windows&copy; the Registry will be used. This is why
     *  A call to a load function with this flag with the corresponding XML file in the applications directory
     *  might succeed under Linux while it fails under Windows&copy;.
     */
    sfNative = 0x1,
    /// \brief Stores/loads the setting in raw mode.
    /**
     *  \note
     *  Under Windows&copy; this mode only works in connection with the <b>mvIMPACT::acquire::sfNative</b> flag.
     *  In that case an arbitrary hive from the registry can be used to create a tree of lists and
     *  properties. This only makes sense for very special applications and therefore is not needed to
     *  write applications, that load and store current settings.
     */
    sfRaw = 0x2,
    /// \brief Stores lists volatile.
    /**
     *  under Windows&copy; when the <b>mvIMPACT::acquire::sfNative</b> flag is set this will store the
     *  component list as a volatile key in the Registry. This means that the data will remain in the
     *  Registry until the system is shut down.
     */
    sfVolatile = 0x4,
    /// \brief If set properties translation dictionaries will be processed for this import/export operation.
    /**
     *  This option forces the function to process the translation dictionaries, which might
     *  be assigned to properties.
     */
    sfProcessPropTranslationDict = 0x8,
    /// \brief If set ALL entries in the store data will be created.
    /**
     *  When loading a setting not only the current lists data will be updated, but also
     *  properties, lists or data, which is found in the storage location but not in the setting
     *  to update will be added to the setting as well.
     */
    sfCreateMissingEntries = 0x10,
    /// \brief If set read-only components will be processed for this import/export operation.
    /**
     *  When importing, exporting or updating a component list components with the
     *  <b>mvIMPACT::acquire::cfWriteAccess</b> not set will be ignored.
     */
    sfProcessReadOnlyComponents = 0x20,
    /// \brief If set data for properties will no be updated.
    /**
     *  If this flag is set the values stored by the property will be ignored for this import/export operation.
     *  \note
     *  This flag is ignored, if <b>mvIMPACT::acquire::sfNative</b> is specified.
     */
    sfIgnorePropData = 0x40,
    /// \brief If set the documentation string will be processed.
    /**
     *  If this flag is set the documentation string will be processed for this import/export operation.
     *  \note
     *  This flag is ignored, if <b>mvIMPACT::acquire::sfNative</b> is specified.
     */
    sfProcessDocString = 0x80,
    /// \brief If set the defined constants for properties will be processed.
    /**
     *  If this flag is set the defined constants for properties will be processed
     *  for this import/export operation.
     */
    sfProcessPropConstantsDict = 0x100,
    /// \brief If set the lists inheritance relationship will be processed.
    /**
     *  If this flag is set the inheritance relationship between lists will be
     *  processed for the current import/export operation.
     *
     *  \note
     *  Limitations:
     *  - derived lists must appear in a list after the parent list. So if a list is derived
     *  from another list, it has to be registered with a higher index either in the same list
     *  as the parent or in a list with a higher index then the list holding the parent in a top
     *  level list.<br><br>
     *  <b>Example for a legal structure:</b>
     * \code
     *  A
     *  |-B
     *  | |-parent
     *  | |-child
     *  |-C
     *  | |-child
     *  |-child
     * \endcode <br><br>
     *  <b>Example for illegal structures:</b>
     * \code
     *  A
     *  |-child
     *  |-parent
     * \endcode
     *  or
     * \code
     *  A
     *  |-B
     *  | |-child
     *  |-parent
     * \endcode
     *  - this feature is not available when <b>mvIMPACT::acquire::sfNative</b> is specified.
     */
    sfProcessInheritance = 0x200,
    /// \brief Specifies if basic data shall be processed.
    /**
     *  For e.g. settings it's not necessary to import/export information about the value
     *  type for properties or the size of lists etc. as this information is available internally
     *  anyway. So interface functions dealing with settings should specify this flag in any case.
     */
    sfIgnoreBasicData = 0x400,
    /// \brief Specifies if invisible components shall be processed.
    /**
     *  When invisible data doesn't need to be processed this flag can be specified. Invisible
     *  components do not influence the current systems behaviour.
     *
     *  \note
     *  This feature is currently only supported for output operations and is ignored for input
     *  operations.
     */
    sfIgnoreInvisible = 0x800,
    /// \brief Stores/loads the setting in/from an XML file
    /**
     *  If this flag is specified the data will be imported/exported from/to an XML file.
     */
    sfFile = 0x1000,
    /// \brief If set the display name will be processed.
    /**
     *  If this flag is set the display name will be processed for this import/export operation.
     *  \note
     *  This flag is ignored, if <b>mvIMPACT::acquire::sfNative</b> is specified.
     */
    sfProcessDisplayName = 0x2000,
#ifndef DOXYGEN_SHOULD_SKIP_THIS
    /// \brief For internal use only!
    sfReserved1 = 0x8000,
    /// \brief For internal use only!
    sfReserved2 = 0x10000,
#endif // #ifndef DOXYGEN_SHOULD_SKIP_THIS
    /// \brief Specifies if the 'is-default' flag for components shall be ignored during import/export operations.
    /**
     *  If this flag is set the 'is-default' flag will not be processed during this import/export operation.
     *  \note
     *  This flag is ignored, if <b>mvIMPACT::acquire::sfNative</b> is specified.
     */
    sfDontProcessDefault = 0x20000
};

//-----------------------------------------------------------------------------
/// \brief Defines the scope for data import/export operations.
/// \ingroup CommonInterface
enum TScope
//-----------------------------------------------------------------------------
{
    /// Save the setting as global as possible.
    sGlobal = 0,
    /// Save the setting in a user specific location.
    sUser = 1
};

#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
typedef enum TCallbackType TCallbackType;
typedef enum TComponentFlag TComponentFlag;
typedef enum TValueType TValueType;
typedef enum TComponentType TComponentType;
typedef enum TComponentVisibility TComponentVisibility;
typedef enum TPROPHANDLING_ERROR TPROPHANDLING_ERROR;
typedef enum TStorageFlag TStorageFlag;
typedef enum TScope TScope;
#endif // DOXYGEN_SHOULD_SKIP_THIS && WRAP_ANY

/// \brief A type to create a unique identifier for a callback.
typedef void*       CallbackHandle;

// restore Borland compiler switch 'force enums to the size of integer'
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   ifdef _WIN32
#       ifdef __BORLANDC__ // is Borland compiler?
#           pragma option pop
#       endif // __BORLANDC__
#   endif // _WIN32
#endif // !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)

#if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)
} // namespace acquire
} // namespace mvIMPACT
#endif // #if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // mvPropHandlingDatatypesH
