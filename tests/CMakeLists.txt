# build the test
set(TEST_BINARY ${PROJECT_NAME}_test)
set(OPERATOR_DIR ../src/operators)
set(SORTING_DIR ../src/sorting)
set(DATA_STRUCTURES_DIR ../src/data_structures)

add_executable(${TEST_BINARY} main.cpp 
  operators/sum_test.cpp 
  operators/subtraction_test.cpp 
  operators/multiplication_test.cpp
  operators/division_test.cpp 
  operators/modulus_test.cpp 
  sorting/bubble_test.cpp 
  data_structures/binary_search_tree/node/node.cpp
  data_structures/binary_search_tree/binary_search_tree.cpp
  )

add_test(NAME ${TEST_BINARY} COMMAND ${TEST_BINARY})

target_include_directories(${TEST_BINARY} PUBLIC 
  ${OPERATOR_DIR}/sum 
  ${OPERATOR_DIR}/subtraction 
  ${OPERATOR_DIR}/multiplication
  ${OPERATOR_DIR}/division
  ${OPERATOR_DIR}/modulus
  ${SORTING_DIR}/bubble

  ${DATA_STRUCTURES_DIR}/binary_search_tree
  ${DATA_STRUCTURES_DIR}/binary_search_tree/node
  ${DATA_STRUCTURES_DIR}/binary_search_tree/bst_manipulator
  )
target_link_libraries(${TEST_BINARY} 
  sum 
  subtraction 
  multiplication
  division
  modulus
  bubble

  binary_search_tree
  node
  bst_manipulator
  )

target_link_libraries(${TEST_BINARY} gtest)
