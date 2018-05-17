# cmake  version
cmake_minimum_required (VERSION 2.8.11)
# le nom du  projet
project(GenerationDesNombresAleatoires)
#ajouter les flags du cmake
set(CMAKE_CXX_FLAGS "-g -Wall -Wno-pedantic -std=c++11 ")
#ajouter les sous-répertoires /src, /test/


include_directories(src)
add_subdirectory(src)
add_subdirectory(test)
#add_subdirectory(doc)


# first we can indicate the documentation build as an option and set it to ON by default
option(BUILD_DOC "Build documentation" ON)

# check if Doxygen is installed
find_package(Doxygen)
if (DOXYGEN_FOUND)
    # set input and output files
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/doc/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    # request to configure the file
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    message("Doxygen build started")

    # note the option ALL which allows to build the docs together with the application
    add_custom_target( doc ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM )
else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")
endif (DOXYGEN_FOUND)
enable_testing()
add_test(NAME dn_assignation COMMAND dn_assignation)
add_test(NAME dn_cdf COMMAND dn_cdf)
add_test(NAME dn_constructeurs COMMAND dn_constructeurs)
add_test(NAME dn_inv_cdf COMMAND dn_inv_cdf)
add_test(NAME gpm_assignation COMMAND gpm_assignation)
add_test(NAME gpm_constructeurs_clone COMMAND gpm_constructeurs_clone)
add_test(NAME gxs_assignation COMMAND gxs_assignation)
add_test(NAME gxs_constructeurs_clone COMMAND gxs_constructeurs_clone)
add_test(NAME pm_assignation COMMAND pm_assignation)
add_test(NAME pm_constructeurs COMMAND pm_constructeurs)
add_test(NAME xs_assignation COMMAND xs_assignation)
add_test(NAME xs_constructeurs COMMAND xs_constructeurs)
add_test(NAME comparaison_variance COMMAND comparaison_variance)
add_test(NAME comparaison_moyenne COMMAND comparaison_moyenne)
