# Copyright (c)  2014  Mikael Leetmaa
#
# This file is part of the KMCLib project distributed under the terms of the
# GNU General Public License version 3, see <http://www.gnu.org/licenses/>.
#


file( GLOB CppSources externals/*.cpp )
file( GLOB HSources externals/*.h )

add_library( externals INTERFACE ${CppSources} )
target_include_directories(externals INTERFACE ${HSources})

add_library(cppunit INTERFACE )
target_include_directories(cppunit INTERFACE)

add_definitions( -Wno-unused-private-field )
