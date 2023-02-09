#include "Binary_search_tree.h"
#include "node/Node.h"
#include "gtest/gtest.h"

namespace {
TEST(bst, insert_function) {
  int rootValue = 5;
  int secondLeft = 3;
  int secondRight = 7;
  int thirdLeftByLeft = 2;
  int thirdRightByLeft = 4;
  int thirdLeftByRight = 6;
  int thirdRightByRight = 8;

  Binary_search_tree *bst = new Binary_search_tree();
  bst->insertNode(rootValue);
  bst->insertNode(secondLeft);
  bst->insertNode(secondRight);

  bst->insertNode(thirdLeftByLeft);
  bst->insertNode(thirdRightByLeft);
  bst->insertNode(thirdLeftByRight);
  bst->insertNode(thirdRightByRight);

  EXPECT_EQ(bst->getRoot()->getData(), rootValue);
  EXPECT_EQ(bst->getRoot()->getLeft()->getData(), secondLeft);
  EXPECT_EQ(bst->getRoot()->getRight()->getData(), secondRight);

  EXPECT_EQ(bst->getRoot()->getLeft()->getLeft()->getData(), thirdLeftByLeft);
  EXPECT_EQ(bst->getRoot()->getLeft()->getRight()->getData(), thirdRightByLeft);
  EXPECT_EQ(bst->getRoot()->getRight()->getLeft()->getData(), thirdLeftByRight);
  EXPECT_EQ(bst->getRoot()->getRight()->getRight()->getData(), thirdRightByRight);
}

} // namespace