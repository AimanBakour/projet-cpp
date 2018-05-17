add_executable(dn_constructeurs  dn_constructeurs.cpp)
target_link_libraries(dn_constructeurs LINK_PUBLIC src)

add_executable(dn_assignation  dn_assignation.cpp)
target_link_libraries(dn_assignation LINK_PUBLIC src)

add_executable(dn_cdf  dn_cdf.cpp)
target_link_libraries(dn_cdf LINK_PUBLIC src)

add_executable(dn_inv_cdf  dn_inv_cdf.cpp)
target_link_libraries(dn_inv_cdf LINK_PUBLIC src)

add_executable(gpm_constructeurs_clone  gpm_constructeurs_clone.cpp)
target_link_libraries(gpm_constructeurs_clone LINK_PUBLIC src)

add_executable(gpm_assignation  gpm_assignation.cpp)
target_link_libraries(gpm_assignation LINK_PUBLIC src)

add_executable(gxs_constructeurs_clone  gxs_constructeurs_clone.cpp)
target_link_libraries(gxs_constructeurs_clone LINK_PUBLIC src)

add_executable(gxs_assignation  gxs_assignation.cpp)
target_link_libraries(gxs_assignation LINK_PUBLIC src)

add_executable(pm_assignation  pm_assignation.cpp)
target_link_libraries(pm_assignation LINK_PUBLIC src)

add_executable(pm_constructeurs  pm_constructeurs.cpp)
target_link_libraries(pm_constructeurs LINK_PUBLIC src)

add_executable(xs_constructeurs  xs_constructeurs.cpp)
target_link_libraries(xs_constructeurs LINK_PUBLIC src)

add_executable(xs_assignation  xs_assignation.cpp)
target_link_libraries(xs_assignation LINK_PUBLIC src)

add_executable(comparaison_moyenne  comparaison_moyenne.cpp)
target_link_libraries(comparaison_moyenne LINK_PUBLIC src)



add_executable(comparaison_variance  comparaison_variance.cpp)
target_link_libraries(comparaison_variance LINK_PUBLIC src)
