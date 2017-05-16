/*
 * Header: script_mod.hpp
 *
 * Description:
 *     Mod's meta header file.
 *
 * Author:
 *     Shamelessly plagiarized from CBA_A3 and ACE3 as a best practice
 *
 * Examples:
 *     in script_component.hpp
 *     #include "\ot\script_mod.hpp"
 *
 * Ref:
 *     @see https://github.com/CBATeam/CBA_A3/tree/master/addons/main
 *     @see https://github.com/acemod/ACE3/tree/master/addons/main
 *
 * Acknowledgment:
 *     All applicable licenses and copyrights remain with the original
 *     author or authors.
 *     @see https://github.com/CBATeam/CBA_A3/blob/master/LICENSE.md
 *     @see https://github.com/acemod/ACE3/blob/master/LICENSE
 */

// these settings work with CBA_A3 common macros

#define MOD_NAME Overthrow

#define PREFIX ot

// version preprocessor definitions before defining strings
// update the header file before version tagging
#include "\ot\script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD

#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required ARMA version for the addon
#define REQUIRED_VERSION 1.67

// MINIMAL required CBA_A3 version for the addon
#define REQUIRED_CBA_VERSION {3,3,0}

// MINIMAL required ACE3 version for the addon
#define REQUIRED_ACE_VERSION {3,9,1}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(MOD_NAME - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(MOD_NAME - COMPONENT)
#endif