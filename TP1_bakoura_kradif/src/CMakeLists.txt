
add_library(src Dvector.cpp GenerateurNombreAleatoire.cpp GenerateurParkMiller.cpp GenerateurXorShift.cpp 
ParkMiller.cpp XorShift.cpp Distribution.cpp DistributionNormale.cpp)

target_include_directories(src PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

