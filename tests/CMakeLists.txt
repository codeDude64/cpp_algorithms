# build the test
set(TEST_BINARY ${PROJECT_NAME}_test)
set(OPERATOR_DIR ../src/operators)
set(SORTING_DIR ../src/sorting)
add_executable(${TEST_BINARY} main.cpp 
  operators/sum_test.cpp 
  operators/subtraction_test.cpp 
  operators/multiplication_test.cpp
  operators/division_test.cpp 
  operators/modulus_test.cpp 
  sorting/bubble_test.cpp 
  )

add_test(NAME ${TEST_BINARY} COMMAND ${TEST_BINARY})

target_include_directories(${TEST_BINARY} PUBLIC 
  ${OPERATOR_DIR}/sum 
  ${OPERATOR_DIR}/subtraction 
  ${OPERATOR_DIR}/multiplication
  ${OPERATOR_DIR}/division
  ${OPERATOR_DIR}/modulus
  ${SORTING_DIR}/bubble
  )
target_link_libraries(${TEST_BINARY} 
  sum 
  subtraction 
  multiplication
  division
  modulus
  bubble
  )

target_link_libraries(${TEST_BINARY} gtest)
