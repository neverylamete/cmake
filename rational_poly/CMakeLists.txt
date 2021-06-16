
add_executable(rational rational_poly.cpp ../lib_rational/lib_rational.h )

target_link_libraries(rational lib_rational)
