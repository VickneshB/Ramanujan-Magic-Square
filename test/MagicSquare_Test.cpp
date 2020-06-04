#include "../include/Ramanujan-Magic-Square.hpp"
#include <gtest/gtest.h>
 

TEST(DateValidityCheck, NegativeTests){
    ASSERT_EQ(checkDate(29, 2,1900), false);
    ASSERT_EQ(checkDate(29, 2,1998), false);
    ASSERT_EQ(checkDate(30, 2,1996), false);
    ASSERT_EQ(checkDate(32, 1,1960), false);
    ASSERT_EQ(checkDate(32, 3,1995), false);
    ASSERT_EQ(checkDate(32, 5,1997), false);
    ASSERT_EQ(checkDate(32, 7,1991), false);
    ASSERT_EQ(checkDate(32, 8,1966), false);
    ASSERT_EQ(checkDate(32,10,1988), false);
    ASSERT_EQ(checkDate(32,12,1980), false);
    ASSERT_EQ(checkDate(31, 4,1968), false);
    ASSERT_EQ(checkDate(31, 6,1997), false);
    ASSERT_EQ(checkDate(31, 9,1998), false);
    ASSERT_EQ(checkDate(31,11,1900), false);
    ASSERT_EQ(checkDate(-2,11,1900), false);
    ASSERT_EQ(checkDate(31,10,-25), false);
    ASSERT_EQ(checkDate(31,15,1900), false);
    ASSERT_EQ(checkDate(31,-2,1900), false);
}

TEST(DateValidityCheck, PositiveTests){
    ASSERT_EQ(checkDate(29, 2,2000), true);
    ASSERT_EQ(checkDate(15, 2,1998), true);
    ASSERT_EQ(checkDate( 3, 2,1996), true);
    ASSERT_EQ(checkDate(22, 1,1960), true);
    ASSERT_EQ(checkDate(31, 3,1995), true);
    ASSERT_EQ(checkDate(30, 5,1997), true);
    ASSERT_EQ(checkDate(27, 7,1991), true);
    ASSERT_EQ(checkDate(01, 8,1966), true);
    ASSERT_EQ(checkDate(12,10,1988), true);
    ASSERT_EQ(checkDate(25,12,1980), true);
    ASSERT_EQ(checkDate(30, 4,1968), true);
    ASSERT_EQ(checkDate(05, 6,1997), true);
    ASSERT_EQ(checkDate(29, 9,1998), true);
    ASSERT_EQ(checkDate(04,11,1900), true);
}

TEST(MagicSquareTest, InvalidDateTests) { 
    ASSERT_EQ(magic_square(29, 2,1900).size(), 1);
    ASSERT_EQ(magic_square(29, 2,1998).size(), 1);
    ASSERT_EQ(magic_square(30, 2,1996).size(), 1);
    ASSERT_EQ(magic_square(32, 1,1960).size(), 1);
    ASSERT_EQ(magic_square(32, 3,1995).size(), 1);
    ASSERT_EQ(magic_square(32, 5,1997).size(), 1);
    ASSERT_EQ(magic_square(32, 7,1991).size(), 1);
    ASSERT_EQ(magic_square(32, 8,1966).size(), 1);
    ASSERT_EQ(magic_square(32,10,1988).size(), 1);
    ASSERT_EQ(magic_square(32,12,1980).size(), 1);
    ASSERT_EQ(magic_square(31, 4,1968).size(), 1);
    ASSERT_EQ(magic_square(31, 6,1997).size(), 1);
    ASSERT_EQ(magic_square(31, 9,1998).size(), 1);
    ASSERT_EQ(magic_square(31,11,1900).size(), 1);
    ASSERT_EQ(magic_square(-2,11,1900).size(), 1);
    ASSERT_EQ(magic_square(31,10,-25).size(), 1);
    ASSERT_EQ(magic_square(31,15,1900).size(), 1);
    ASSERT_EQ(magic_square(31,-2,1900).size(), 1);
    
    ASSERT_EQ(magic_square(29, 2,1900)[0].size(), 1);
    ASSERT_EQ(magic_square(29, 2,1998)[0].size(), 1);
    ASSERT_EQ(magic_square(30, 2,1996)[0].size(), 1);
    ASSERT_EQ(magic_square(32, 1,1960)[0].size(), 1);
    ASSERT_EQ(magic_square(32, 3,1995)[0].size(), 1);
    ASSERT_EQ(magic_square(32, 5,1997)[0].size(), 1);
    ASSERT_EQ(magic_square(32, 7,1991)[0].size(), 1);
    ASSERT_EQ(magic_square(32, 8,1966)[0].size(), 1);
    ASSERT_EQ(magic_square(32,10,1988)[0].size(), 1);
    ASSERT_EQ(magic_square(32,12,1988)[0].size(), 1);
    ASSERT_EQ(magic_square(31, 4,1988)[0].size(), 1);
    ASSERT_EQ(magic_square(31, 6,1988)[0].size(), 1);
    ASSERT_EQ(magic_square(31, 9,1988)[0].size(), 1);
    ASSERT_EQ(magic_square(31,11,1988)[0].size(), 1);
    ASSERT_EQ(magic_square(-2,11,1900)[0].size(), 1);
    ASSERT_EQ(magic_square(31,10,-25)[0].size(), 1);
    ASSERT_EQ(magic_square(31,15,1900)[0].size(), 1);
    ASSERT_EQ(magic_square(31,-2,1900)[0].size(), 1);
}

TEST(MagicSquareTest, BirthDateTest) { 
    ASSERT_EQ(magic_square(28, 7,1998)[0][0], 28);
    ASSERT_EQ(magic_square(23, 5,1997)[0][0], 23);
    ASSERT_EQ(magic_square( 9,10,1996)[0][0], 9);
    ASSERT_EQ(magic_square( 2, 8,1993)[0][0], 2);
    ASSERT_EQ(magic_square(15,10,1995)[0][0], 15);
    ASSERT_EQ(magic_square(27, 8,1995)[0][0], 27);
    ASSERT_EQ(magic_square(26, 8,1991)[0][0], 26);
    ASSERT_EQ(magic_square(18,12,1960)[0][0], 18);
    ASSERT_EQ(magic_square(10, 6,1966)[0][0], 10);
    ASSERT_EQ(magic_square(18, 9,1988)[0][0], 18);
}

TEST(MagicSquareTest, BirthMonthTest) { 
    ASSERT_EQ(magic_square(28, 7,1998)[0][1], 7);
    ASSERT_EQ(magic_square(23, 5,1997)[0][1], 5);
    ASSERT_EQ(magic_square( 9,10,1996)[0][1], 10);
    ASSERT_EQ(magic_square( 2, 8,1993)[0][1], 8);
    ASSERT_EQ(magic_square(15,10,1995)[0][1], 10);
    ASSERT_EQ(magic_square(27, 8,1995)[0][1], 8);
    ASSERT_EQ(magic_square(26, 8,1991)[0][1], 8);
    ASSERT_EQ(magic_square(18,12,1960)[0][1], 12);
    ASSERT_EQ(magic_square(10, 6,1966)[0][1], 6);
    ASSERT_EQ(magic_square(18, 9,1988)[0][1], 9);
}

TEST(MagicSquareTest, BirthCenturyTest) { 
    ASSERT_EQ(magic_square(28, 7,1998)[0][2], 19);
    ASSERT_EQ(magic_square(23, 5,1997)[0][2], 19);
    ASSERT_EQ(magic_square( 9,10,1996)[0][2], 19);
    ASSERT_EQ(magic_square( 2, 8,1993)[0][2], 19);
    ASSERT_EQ(magic_square(15,10,1995)[0][2], 19);
    ASSERT_EQ(magic_square(27, 8,1995)[0][2], 19);
    ASSERT_EQ(magic_square(26, 8,1991)[0][2], 19);
    ASSERT_EQ(magic_square(18,12,1960)[0][2], 19);
    ASSERT_EQ(magic_square(10, 6,1966)[0][2], 19);
    ASSERT_EQ(magic_square(18, 9,1988)[0][2], 19);
}

TEST(MagicSquareTest, BirthYearTest) { 
    ASSERT_EQ(magic_square(28, 7,1998)[0][3], 98);
    ASSERT_EQ(magic_square(23, 5,1997)[0][3], 97);
    ASSERT_EQ(magic_square( 9,10,1996)[0][3], 96);
    ASSERT_EQ(magic_square( 2, 8,1993)[0][3], 93);
    ASSERT_EQ(magic_square(15,10,1995)[0][3], 95);
    ASSERT_EQ(magic_square(27, 8,1995)[0][3], 95);
    ASSERT_EQ(magic_square(26, 8,1991)[0][3], 91);
    ASSERT_EQ(magic_square(18,12,1960)[0][3], 60);
    ASSERT_EQ(magic_square(10, 6,1966)[0][3], 66);
    ASSERT_EQ(magic_square(18, 9,1988)[0][3], 88);
}

TEST(MagicSquareTest, Row1Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][0]+magic_square(28, 7,1998)[0][1]+magic_square(28, 7,1998)[0][2]+magic_square(28, 7,1998)[0][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][0]+magic_square(23, 5,1997)[0][1]+magic_square(23, 5,1997)[0][2]+magic_square(23, 5,1997)[0][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][0]+magic_square( 9,10,1996)[0][1]+magic_square( 9,10,1996)[0][2]+magic_square( 9,10,1996)[0][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][0]+magic_square( 2, 8,1993)[0][1]+magic_square( 2, 8,1993)[0][2]+magic_square( 2, 8,1993)[0][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][0]+magic_square(15,10,1995)[0][1]+magic_square(15,10,1995)[0][2]+magic_square(15,10,1995)[0][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][0]+magic_square(27, 8,1995)[0][1]+magic_square(27, 8,1995)[0][2]+magic_square(27, 8,1995)[0][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][0]+magic_square(26, 8,1991)[0][1]+magic_square(26, 8,1991)[0][2]+magic_square(26, 8,1991)[0][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][0]+magic_square(18,12,1960)[0][1]+magic_square(18,12,1960)[0][2]+magic_square(18,12,1960)[0][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][0]+magic_square(10, 6,1966)[0][1]+magic_square(10, 6,1966)[0][2]+magic_square(10, 6,1966)[0][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][0]+magic_square(18, 9,1988)[0][1]+magic_square(18, 9,1988)[0][2]+magic_square(18, 9,1988)[0][3]), 134);
}

TEST(MagicSquareTest, Row2Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[1][0]+magic_square(28, 7,1998)[1][1]+magic_square(28, 7,1998)[1][2]+magic_square(28, 7,1998)[1][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[1][0]+magic_square(23, 5,1997)[1][1]+magic_square(23, 5,1997)[1][2]+magic_square(23, 5,1997)[1][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[1][0]+magic_square( 9,10,1996)[1][1]+magic_square( 9,10,1996)[1][2]+magic_square( 9,10,1996)[1][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[1][0]+magic_square( 2, 8,1993)[1][1]+magic_square( 2, 8,1993)[1][2]+magic_square( 2, 8,1993)[1][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[1][0]+magic_square(15,10,1995)[1][1]+magic_square(15,10,1995)[1][2]+magic_square(15,10,1995)[1][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[1][0]+magic_square(27, 8,1995)[1][1]+magic_square(27, 8,1995)[1][2]+magic_square(27, 8,1995)[1][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[1][0]+magic_square(26, 8,1991)[1][1]+magic_square(26, 8,1991)[1][2]+magic_square(26, 8,1991)[1][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[1][0]+magic_square(18,12,1960)[1][1]+magic_square(18,12,1960)[1][2]+magic_square(18,12,1960)[1][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[1][0]+magic_square(10, 6,1966)[1][1]+magic_square(10, 6,1966)[1][2]+magic_square(10, 6,1966)[1][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[1][0]+magic_square(18, 9,1988)[1][1]+magic_square(18, 9,1988)[1][2]+magic_square(18, 9,1988)[1][3]), 134);
}

TEST(MagicSquareTest, Row3Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[2][0]+magic_square(28, 7,1998)[2][1]+magic_square(28, 7,1998)[2][2]+magic_square(28, 7,1998)[2][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[2][0]+magic_square(23, 5,1997)[2][1]+magic_square(23, 5,1997)[2][2]+magic_square(23, 5,1997)[2][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[2][0]+magic_square( 9,10,1996)[2][1]+magic_square( 9,10,1996)[2][2]+magic_square( 9,10,1996)[2][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[2][0]+magic_square( 2, 8,1993)[2][1]+magic_square( 2, 8,1993)[2][2]+magic_square( 2, 8,1993)[2][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[2][0]+magic_square(15,10,1995)[2][1]+magic_square(15,10,1995)[2][2]+magic_square(15,10,1995)[2][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[2][0]+magic_square(27, 8,1995)[2][1]+magic_square(27, 8,1995)[2][2]+magic_square(27, 8,1995)[2][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[2][0]+magic_square(26, 8,1991)[2][1]+magic_square(26, 8,1991)[2][2]+magic_square(26, 8,1991)[2][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[2][0]+magic_square(18,12,1960)[2][1]+magic_square(18,12,1960)[2][2]+magic_square(18,12,1960)[2][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[2][0]+magic_square(10, 6,1966)[2][1]+magic_square(10, 6,1966)[2][2]+magic_square(10, 6,1966)[2][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[2][0]+magic_square(18, 9,1988)[2][1]+magic_square(18, 9,1988)[2][2]+magic_square(18, 9,1988)[2][3]), 134);
}

TEST(MagicSquareTest, Row4Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[3][0]+magic_square(28, 7,1998)[3][1]+magic_square(28, 7,1998)[3][2]+magic_square(28, 7,1998)[3][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[3][0]+magic_square(23, 5,1997)[3][1]+magic_square(23, 5,1997)[3][2]+magic_square(23, 5,1997)[3][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[3][0]+magic_square( 9,10,1996)[3][1]+magic_square( 9,10,1996)[3][2]+magic_square( 9,10,1996)[3][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[3][0]+magic_square( 2, 8,1993)[3][1]+magic_square( 2, 8,1993)[3][2]+magic_square( 2, 8,1993)[3][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[3][0]+magic_square(15,10,1995)[3][1]+magic_square(15,10,1995)[3][2]+magic_square(15,10,1995)[3][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[3][0]+magic_square(27, 8,1995)[3][1]+magic_square(27, 8,1995)[3][2]+magic_square(27, 8,1995)[3][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[3][0]+magic_square(26, 8,1991)[3][1]+magic_square(26, 8,1991)[3][2]+magic_square(26, 8,1991)[3][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[3][0]+magic_square(18,12,1960)[3][1]+magic_square(18,12,1960)[3][2]+magic_square(18,12,1960)[3][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[3][0]+magic_square(10, 6,1966)[3][1]+magic_square(10, 6,1966)[3][2]+magic_square(10, 6,1966)[3][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[3][0]+magic_square(18, 9,1988)[3][1]+magic_square(18, 9,1988)[3][2]+magic_square(18, 9,1988)[3][3]), 134);
}


TEST(MagicSquareTest, Column1Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][0]+magic_square(28, 7,1998)[1][0]+magic_square(28, 7,1998)[2][0]+magic_square(28, 7,1998)[3][0]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][0]+magic_square(23, 5,1997)[1][0]+magic_square(23, 5,1997)[2][0]+magic_square(23, 5,1997)[3][0]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][0]+magic_square( 9,10,1996)[1][0]+magic_square( 9,10,1996)[2][0]+magic_square( 9,10,1996)[3][0]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][0]+magic_square( 2, 8,1993)[1][0]+magic_square( 2, 8,1993)[2][0]+magic_square( 2, 8,1993)[3][0]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][0]+magic_square(15,10,1995)[1][0]+magic_square(15,10,1995)[2][0]+magic_square(15,10,1995)[3][0]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][0]+magic_square(27, 8,1995)[1][0]+magic_square(27, 8,1995)[2][0]+magic_square(27, 8,1995)[3][0]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][0]+magic_square(26, 8,1991)[1][0]+magic_square(26, 8,1991)[2][0]+magic_square(26, 8,1991)[3][0]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][0]+magic_square(18,12,1960)[1][0]+magic_square(18,12,1960)[2][0]+magic_square(18,12,1960)[3][0]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][0]+magic_square(10, 6,1966)[1][0]+magic_square(10, 6,1966)[2][0]+magic_square(10, 6,1966)[3][0]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][0]+magic_square(18, 9,1988)[1][0]+magic_square(18, 9,1988)[2][0]+magic_square(18, 9,1988)[3][0]), 134);
}

TEST(MagicSquareTest, Column2Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][1]+magic_square(28, 7,1998)[1][1]+magic_square(28, 7,1998)[2][1]+magic_square(28, 7,1998)[3][1]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][1]+magic_square(23, 5,1997)[1][1]+magic_square(23, 5,1997)[2][1]+magic_square(23, 5,1997)[3][1]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][1]+magic_square( 9,10,1996)[1][1]+magic_square( 9,10,1996)[2][1]+magic_square( 9,10,1996)[3][1]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][1]+magic_square( 2, 8,1993)[1][1]+magic_square( 2, 8,1993)[2][1]+magic_square( 2, 8,1993)[3][1]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][1]+magic_square(15,10,1995)[1][1]+magic_square(15,10,1995)[2][1]+magic_square(15,10,1995)[3][1]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][1]+magic_square(27, 8,1995)[1][1]+magic_square(27, 8,1995)[2][1]+magic_square(27, 8,1995)[3][1]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][1]+magic_square(26, 8,1991)[1][1]+magic_square(26, 8,1991)[2][1]+magic_square(26, 8,1991)[3][1]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][1]+magic_square(18,12,1960)[1][1]+magic_square(18,12,1960)[2][1]+magic_square(18,12,1960)[3][1]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][1]+magic_square(10, 6,1966)[1][1]+magic_square(10, 6,1966)[2][1]+magic_square(10, 6,1966)[3][1]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][1]+magic_square(18, 9,1988)[1][1]+magic_square(18, 9,1988)[2][1]+magic_square(18, 9,1988)[3][1]), 134);
}

TEST(MagicSquareTest, Column3Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][2]+magic_square(28, 7,1998)[1][2]+magic_square(28, 7,1998)[2][2]+magic_square(28, 7,1998)[3][2]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][2]+magic_square(23, 5,1997)[1][2]+magic_square(23, 5,1997)[2][2]+magic_square(23, 5,1997)[3][2]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][2]+magic_square( 9,10,1996)[1][2]+magic_square( 9,10,1996)[2][2]+magic_square( 9,10,1996)[3][2]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][2]+magic_square( 2, 8,1993)[1][2]+magic_square( 2, 8,1993)[2][2]+magic_square( 2, 8,1993)[3][2]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][2]+magic_square(15,10,1995)[1][2]+magic_square(15,10,1995)[2][2]+magic_square(15,10,1995)[3][2]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][2]+magic_square(27, 8,1995)[1][2]+magic_square(27, 8,1995)[2][2]+magic_square(27, 8,1995)[3][2]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][2]+magic_square(26, 8,1991)[1][2]+magic_square(26, 8,1991)[2][2]+magic_square(26, 8,1991)[3][2]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][2]+magic_square(18,12,1960)[1][2]+magic_square(18,12,1960)[2][2]+magic_square(18,12,1960)[3][2]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][2]+magic_square(10, 6,1966)[1][2]+magic_square(10, 6,1966)[2][2]+magic_square(10, 6,1966)[3][2]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][2]+magic_square(18, 9,1988)[1][2]+magic_square(18, 9,1988)[2][2]+magic_square(18, 9,1988)[3][2]), 134);
}

TEST(MagicSquareTest, Column4Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][3]+magic_square(28, 7,1998)[1][3]+magic_square(28, 7,1998)[2][3]+magic_square(28, 7,1998)[3][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][3]+magic_square(23, 5,1997)[1][3]+magic_square(23, 5,1997)[2][3]+magic_square(23, 5,1997)[3][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][3]+magic_square( 9,10,1996)[1][3]+magic_square( 9,10,1996)[2][3]+magic_square( 9,10,1996)[3][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][3]+magic_square( 2, 8,1993)[1][3]+magic_square( 2, 8,1993)[2][3]+magic_square( 2, 8,1993)[3][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][3]+magic_square(15,10,1995)[1][3]+magic_square(15,10,1995)[2][3]+magic_square(15,10,1995)[3][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][3]+magic_square(27, 8,1995)[1][3]+magic_square(27, 8,1995)[2][3]+magic_square(27, 8,1995)[3][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][3]+magic_square(26, 8,1991)[1][3]+magic_square(26, 8,1991)[2][3]+magic_square(26, 8,1991)[3][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][3]+magic_square(18,12,1960)[1][3]+magic_square(18,12,1960)[2][3]+magic_square(18,12,1960)[3][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][3]+magic_square(10, 6,1966)[1][3]+magic_square(10, 6,1966)[2][3]+magic_square(10, 6,1966)[3][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][3]+magic_square(18, 9,1988)[1][3]+magic_square(18, 9,1988)[2][3]+magic_square(18, 9,1988)[3][3]), 134);
}

TEST(MagicSquareTest, Diag1Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][0]+magic_square(28, 7,1998)[1][1]+magic_square(28, 7,1998)[2][2]+magic_square(28, 7,1998)[3][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][0]+magic_square(23, 5,1997)[1][1]+magic_square(23, 5,1997)[2][2]+magic_square(23, 5,1997)[3][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][0]+magic_square( 9,10,1996)[1][1]+magic_square( 9,10,1996)[2][2]+magic_square( 9,10,1996)[3][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][0]+magic_square( 2, 8,1993)[1][1]+magic_square( 2, 8,1993)[2][2]+magic_square( 2, 8,1993)[3][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][0]+magic_square(15,10,1995)[1][1]+magic_square(15,10,1995)[2][2]+magic_square(15,10,1995)[3][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][0]+magic_square(27, 8,1995)[1][1]+magic_square(27, 8,1995)[2][2]+magic_square(27, 8,1995)[3][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][0]+magic_square(26, 8,1991)[1][1]+magic_square(26, 8,1991)[2][2]+magic_square(26, 8,1991)[3][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][0]+magic_square(18,12,1960)[1][1]+magic_square(18,12,1960)[2][2]+magic_square(18,12,1960)[3][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][0]+magic_square(10, 6,1966)[1][1]+magic_square(10, 6,1966)[2][2]+magic_square(10, 6,1966)[3][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][0]+magic_square(18, 9,1988)[1][1]+magic_square(18, 9,1988)[2][2]+magic_square(18, 9,1988)[3][3]), 134);
}

TEST(MagicSquareTest, Diag2Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][3]+magic_square(28, 7,1998)[1][2]+magic_square(28, 7,1998)[2][1]+magic_square(28, 7,1998)[3][0]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][3]+magic_square(23, 5,1997)[1][2]+magic_square(23, 5,1997)[2][1]+magic_square(23, 5,1997)[3][0]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][3]+magic_square( 9,10,1996)[1][2]+magic_square( 9,10,1996)[2][1]+magic_square( 9,10,1996)[3][0]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][3]+magic_square( 2, 8,1993)[1][2]+magic_square( 2, 8,1993)[2][1]+magic_square( 2, 8,1993)[3][0]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][3]+magic_square(15,10,1995)[1][2]+magic_square(15,10,1995)[2][1]+magic_square(15,10,1995)[3][0]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][3]+magic_square(27, 8,1995)[1][2]+magic_square(27, 8,1995)[2][1]+magic_square(27, 8,1995)[3][0]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][3]+magic_square(26, 8,1991)[1][2]+magic_square(26, 8,1991)[2][1]+magic_square(26, 8,1991)[3][0]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][3]+magic_square(18,12,1960)[1][2]+magic_square(18,12,1960)[2][1]+magic_square(18,12,1960)[3][0]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][3]+magic_square(10, 6,1966)[1][2]+magic_square(10, 6,1966)[2][1]+magic_square(10, 6,1966)[3][0]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][3]+magic_square(18, 9,1988)[1][2]+magic_square(18, 9,1988)[2][1]+magic_square(18, 9,1988)[3][0]), 134);
}

TEST(MagicSquareTest, CornersTests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][0]+magic_square(28, 7,1998)[3][0]+magic_square(28, 7,1998)[0][3]+magic_square(28, 7,1998)[3][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][0]+magic_square(23, 5,1997)[3][0]+magic_square(23, 5,1997)[0][3]+magic_square(23, 5,1997)[3][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][0]+magic_square( 9,10,1996)[3][0]+magic_square( 9,10,1996)[0][3]+magic_square( 9,10,1996)[3][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][0]+magic_square( 2, 8,1993)[3][0]+magic_square( 2, 8,1993)[0][3]+magic_square( 2, 8,1993)[3][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][0]+magic_square(15,10,1995)[3][0]+magic_square(15,10,1995)[0][3]+magic_square(15,10,1995)[3][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][0]+magic_square(27, 8,1995)[3][0]+magic_square(27, 8,1995)[0][3]+magic_square(27, 8,1995)[3][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][0]+magic_square(26, 8,1991)[3][0]+magic_square(26, 8,1991)[0][3]+magic_square(26, 8,1991)[3][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][0]+magic_square(18,12,1960)[3][0]+magic_square(18,12,1960)[0][3]+magic_square(18,12,1960)[3][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][0]+magic_square(10, 6,1966)[3][0]+magic_square(10, 6,1966)[0][3]+magic_square(10, 6,1966)[3][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][0]+magic_square(18, 9,1988)[3][0]+magic_square(18, 9,1988)[0][3]+magic_square(18, 9,1988)[3][3]), 134);
}

TEST(MagicSquareTest, TopLeftRectTests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][0]+magic_square(28, 7,1998)[1][0]+magic_square(28, 7,1998)[0][1]+magic_square(28, 7,1998)[1][1]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][0]+magic_square(23, 5,1997)[1][0]+magic_square(23, 5,1997)[0][1]+magic_square(23, 5,1997)[1][1]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][0]+magic_square( 9,10,1996)[1][0]+magic_square( 9,10,1996)[0][1]+magic_square( 9,10,1996)[1][1]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][0]+magic_square( 2, 8,1993)[1][0]+magic_square( 2, 8,1993)[0][1]+magic_square( 2, 8,1993)[1][1]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][0]+magic_square(15,10,1995)[1][0]+magic_square(15,10,1995)[0][1]+magic_square(15,10,1995)[1][1]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][0]+magic_square(27, 8,1995)[1][0]+magic_square(27, 8,1995)[0][1]+magic_square(27, 8,1995)[1][1]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][0]+magic_square(26, 8,1991)[1][0]+magic_square(26, 8,1991)[0][1]+magic_square(26, 8,1991)[1][1]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][0]+magic_square(18,12,1960)[1][0]+magic_square(18,12,1960)[0][1]+magic_square(18,12,1960)[1][1]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][0]+magic_square(10, 6,1966)[1][0]+magic_square(10, 6,1966)[0][1]+magic_square(10, 6,1966)[1][1]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][0]+magic_square(18, 9,1988)[1][0]+magic_square(18, 9,1988)[0][1]+magic_square(18, 9,1988)[1][1]), 134);
}


TEST(MagicSquareTest, TopRightRectTests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][2]+magic_square(28, 7,1998)[1][2]+magic_square(28, 7,1998)[0][3]+magic_square(28, 7,1998)[1][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][2]+magic_square(23, 5,1997)[1][2]+magic_square(23, 5,1997)[0][3]+magic_square(23, 5,1997)[1][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][2]+magic_square( 9,10,1996)[1][2]+magic_square( 9,10,1996)[0][3]+magic_square( 9,10,1996)[1][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][2]+magic_square( 2, 8,1993)[1][2]+magic_square( 2, 8,1993)[0][3]+magic_square( 2, 8,1993)[1][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][2]+magic_square(15,10,1995)[1][2]+magic_square(15,10,1995)[0][3]+magic_square(15,10,1995)[1][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][2]+magic_square(27, 8,1995)[1][2]+magic_square(27, 8,1995)[0][3]+magic_square(27, 8,1995)[1][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][2]+magic_square(26, 8,1991)[1][2]+magic_square(26, 8,1991)[0][3]+magic_square(26, 8,1991)[1][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][2]+magic_square(18,12,1960)[1][2]+magic_square(18,12,1960)[0][3]+magic_square(18,12,1960)[1][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][2]+magic_square(10, 6,1966)[1][2]+magic_square(10, 6,1966)[0][3]+magic_square(10, 6,1966)[1][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][2]+magic_square(18, 9,1988)[1][2]+magic_square(18, 9,1988)[0][3]+magic_square(18, 9,1988)[1][3]), 134);
}

TEST(MagicSquareTest, CenterLeftRectTests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[1][0]+magic_square(28, 7,1998)[2][0]+magic_square(28, 7,1998)[1][1]+magic_square(28, 7,1998)[2][1]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[1][0]+magic_square(23, 5,1997)[2][0]+magic_square(23, 5,1997)[1][1]+magic_square(23, 5,1997)[2][1]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[1][0]+magic_square( 9,10,1996)[2][0]+magic_square( 9,10,1996)[1][1]+magic_square( 9,10,1996)[2][1]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[1][0]+magic_square( 2, 8,1993)[2][0]+magic_square( 2, 8,1993)[1][1]+magic_square( 2, 8,1993)[2][1]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[1][0]+magic_square(15,10,1995)[2][0]+magic_square(15,10,1995)[1][1]+magic_square(15,10,1995)[2][1]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[1][0]+magic_square(27, 8,1995)[2][0]+magic_square(27, 8,1995)[1][1]+magic_square(27, 8,1995)[2][1]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[1][0]+magic_square(26, 8,1991)[2][0]+magic_square(26, 8,1991)[1][1]+magic_square(26, 8,1991)[2][1]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[1][0]+magic_square(18,12,1960)[2][0]+magic_square(18,12,1960)[1][1]+magic_square(18,12,1960)[2][1]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[1][0]+magic_square(10, 6,1966)[2][0]+magic_square(10, 6,1966)[1][1]+magic_square(10, 6,1966)[2][1]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[1][0]+magic_square(18, 9,1988)[2][0]+magic_square(18, 9,1988)[1][1]+magic_square(18, 9,1988)[2][1]), 134);
}

TEST(MagicSquareTest, CenterRectTests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[1][1]+magic_square(28, 7,1998)[2][1]+magic_square(28, 7,1998)[1][2]+magic_square(28, 7,1998)[2][2]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[1][1]+magic_square(23, 5,1997)[2][1]+magic_square(23, 5,1997)[1][2]+magic_square(23, 5,1997)[2][2]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[1][1]+magic_square( 9,10,1996)[2][1]+magic_square( 9,10,1996)[1][2]+magic_square( 9,10,1996)[2][2]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[1][1]+magic_square( 2, 8,1993)[2][1]+magic_square( 2, 8,1993)[1][2]+magic_square( 2, 8,1993)[2][2]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[1][1]+magic_square(15,10,1995)[2][1]+magic_square(15,10,1995)[1][2]+magic_square(15,10,1995)[2][2]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[1][1]+magic_square(27, 8,1995)[2][1]+magic_square(27, 8,1995)[1][2]+magic_square(27, 8,1995)[2][2]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[1][1]+magic_square(26, 8,1991)[2][1]+magic_square(26, 8,1991)[1][2]+magic_square(26, 8,1991)[2][2]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[1][1]+magic_square(18,12,1960)[2][1]+magic_square(18,12,1960)[1][2]+magic_square(18,12,1960)[2][2]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[1][1]+magic_square(10, 6,1966)[2][1]+magic_square(10, 6,1966)[1][2]+magic_square(10, 6,1966)[2][2]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[1][1]+magic_square(18, 9,1988)[2][1]+magic_square(18, 9,1988)[1][2]+magic_square(18, 9,1988)[2][2]), 134);
}

TEST(MagicSquareTest, CenterRightRectTests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[1][2]+magic_square(28, 7,1998)[2][2]+magic_square(28, 7,1998)[1][3]+magic_square(28, 7,1998)[2][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[1][2]+magic_square(23, 5,1997)[2][2]+magic_square(23, 5,1997)[1][3]+magic_square(23, 5,1997)[2][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[1][2]+magic_square( 9,10,1996)[2][2]+magic_square( 9,10,1996)[1][3]+magic_square( 9,10,1996)[2][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[1][2]+magic_square( 2, 8,1993)[2][2]+magic_square( 2, 8,1993)[1][3]+magic_square( 2, 8,1993)[2][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[1][2]+magic_square(15,10,1995)[2][2]+magic_square(15,10,1995)[1][3]+magic_square(15,10,1995)[2][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[1][2]+magic_square(27, 8,1995)[2][2]+magic_square(27, 8,1995)[1][3]+magic_square(27, 8,1995)[2][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[1][2]+magic_square(26, 8,1991)[2][2]+magic_square(26, 8,1991)[1][3]+magic_square(26, 8,1991)[2][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[1][2]+magic_square(18,12,1960)[2][2]+magic_square(18,12,1960)[1][3]+magic_square(18,12,1960)[2][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[1][2]+magic_square(10, 6,1966)[2][2]+magic_square(10, 6,1966)[1][3]+magic_square(10, 6,1966)[2][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[1][2]+magic_square(18, 9,1988)[2][2]+magic_square(18, 9,1988)[1][3]+magic_square(18, 9,1988)[2][3]), 134);
}

TEST(MagicSquareTest, BottomLeftRectTests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[2][0]+magic_square(28, 7,1998)[3][0]+magic_square(28, 7,1998)[2][1]+magic_square(28, 7,1998)[3][1]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[2][0]+magic_square(23, 5,1997)[3][0]+magic_square(23, 5,1997)[2][1]+magic_square(23, 5,1997)[3][1]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[2][0]+magic_square( 9,10,1996)[3][0]+magic_square( 9,10,1996)[2][1]+magic_square( 9,10,1996)[3][1]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[2][0]+magic_square( 2, 8,1993)[3][0]+magic_square( 2, 8,1993)[2][1]+magic_square( 2, 8,1993)[3][1]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[2][0]+magic_square(15,10,1995)[3][0]+magic_square(15,10,1995)[2][1]+magic_square(15,10,1995)[3][1]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[2][0]+magic_square(27, 8,1995)[3][0]+magic_square(27, 8,1995)[2][1]+magic_square(27, 8,1995)[3][1]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[2][0]+magic_square(26, 8,1991)[3][0]+magic_square(26, 8,1991)[2][1]+magic_square(26, 8,1991)[3][1]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[2][0]+magic_square(18,12,1960)[3][0]+magic_square(18,12,1960)[2][1]+magic_square(18,12,1960)[3][1]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[2][0]+magic_square(10, 6,1966)[3][0]+magic_square(10, 6,1966)[2][1]+magic_square(10, 6,1966)[3][1]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[2][0]+magic_square(18, 9,1988)[3][0]+magic_square(18, 9,1988)[2][1]+magic_square(18, 9,1988)[3][1]), 134);
}

TEST(MagicSquareTest, BottomRightRectTests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[2][2]+magic_square(28, 7,1998)[3][2]+magic_square(28, 7,1998)[2][3]+magic_square(28, 7,1998)[3][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[2][2]+magic_square(23, 5,1997)[3][2]+magic_square(23, 5,1997)[2][3]+magic_square(23, 5,1997)[3][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[2][2]+magic_square( 9,10,1996)[3][2]+magic_square( 9,10,1996)[2][3]+magic_square( 9,10,1996)[3][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[2][2]+magic_square( 2, 8,1993)[3][2]+magic_square( 2, 8,1993)[2][3]+magic_square( 2, 8,1993)[3][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[2][2]+magic_square(15,10,1995)[3][2]+magic_square(15,10,1995)[2][3]+magic_square(15,10,1995)[3][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[2][2]+magic_square(27, 8,1995)[3][2]+magic_square(27, 8,1995)[2][3]+magic_square(27, 8,1995)[3][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[2][2]+magic_square(26, 8,1991)[3][2]+magic_square(26, 8,1991)[2][3]+magic_square(26, 8,1991)[3][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[2][2]+magic_square(18,12,1960)[3][2]+magic_square(18,12,1960)[2][3]+magic_square(18,12,1960)[3][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[2][2]+magic_square(10, 6,1966)[3][2]+magic_square(10, 6,1966)[2][3]+magic_square(10, 6,1966)[3][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[2][2]+magic_square(18, 9,1988)[3][2]+magic_square(18, 9,1988)[2][3]+magic_square(18, 9,1988)[3][3]), 134);
}

TEST(MagicSquareTest, Rect1Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[0][1]+magic_square(28, 7,1998)[0][2]+magic_square(28, 7,1998)[3][1]+magic_square(28, 7,1998)[3][2]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[0][1]+magic_square(23, 5,1997)[0][2]+magic_square(23, 5,1997)[3][1]+magic_square(23, 5,1997)[3][2]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[0][1]+magic_square( 9,10,1996)[0][2]+magic_square( 9,10,1996)[3][1]+magic_square( 9,10,1996)[3][2]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[0][1]+magic_square( 2, 8,1993)[0][2]+magic_square( 2, 8,1993)[3][1]+magic_square( 2, 8,1993)[3][2]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[0][1]+magic_square(15,10,1995)[0][2]+magic_square(15,10,1995)[3][1]+magic_square(15,10,1995)[3][2]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[0][1]+magic_square(27, 8,1995)[0][2]+magic_square(27, 8,1995)[3][1]+magic_square(27, 8,1995)[3][2]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[0][1]+magic_square(26, 8,1991)[0][2]+magic_square(26, 8,1991)[3][1]+magic_square(26, 8,1991)[3][2]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[0][1]+magic_square(18,12,1960)[0][2]+magic_square(18,12,1960)[3][1]+magic_square(18,12,1960)[3][2]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[0][1]+magic_square(10, 6,1966)[0][2]+magic_square(10, 6,1966)[3][1]+magic_square(10, 6,1966)[3][2]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[0][1]+magic_square(18, 9,1988)[0][2]+magic_square(18, 9,1988)[3][1]+magic_square(18, 9,1988)[3][2]), 134);
}

TEST(MagicSquareTest, Rect2Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[1][0]+magic_square(28, 7,1998)[2][0]+magic_square(28, 7,1998)[1][3]+magic_square(28, 7,1998)[2][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[1][0]+magic_square(23, 5,1997)[2][0]+magic_square(23, 5,1997)[1][3]+magic_square(23, 5,1997)[2][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[1][0]+magic_square( 9,10,1996)[2][0]+magic_square( 9,10,1996)[1][3]+magic_square( 9,10,1996)[2][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[1][0]+magic_square( 2, 8,1993)[2][0]+magic_square( 2, 8,1993)[1][3]+magic_square( 2, 8,1993)[2][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[1][0]+magic_square(15,10,1995)[2][0]+magic_square(15,10,1995)[1][3]+magic_square(15,10,1995)[2][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[1][0]+magic_square(27, 8,1995)[2][0]+magic_square(27, 8,1995)[1][3]+magic_square(27, 8,1995)[2][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[1][0]+magic_square(26, 8,1991)[2][0]+magic_square(26, 8,1991)[1][3]+magic_square(26, 8,1991)[2][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[1][0]+magic_square(18,12,1960)[2][0]+magic_square(18,12,1960)[1][3]+magic_square(18,12,1960)[2][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[1][0]+magic_square(10, 6,1966)[2][0]+magic_square(10, 6,1966)[1][3]+magic_square(10, 6,1966)[2][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[1][0]+magic_square(18, 9,1988)[2][0]+magic_square(18, 9,1988)[1][3]+magic_square(18, 9,1988)[2][3]), 134);
}

TEST(MagicSquareTest, Combination1Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[1][0]+magic_square(28, 7,1998)[0][1]+magic_square(28, 7,1998)[3][2]+magic_square(28, 7,1998)[2][3]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[1][0]+magic_square(23, 5,1997)[0][1]+magic_square(23, 5,1997)[3][2]+magic_square(23, 5,1997)[2][3]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[1][0]+magic_square( 9,10,1996)[0][1]+magic_square( 9,10,1996)[3][2]+magic_square( 9,10,1996)[2][3]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[1][0]+magic_square( 2, 8,1993)[0][1]+magic_square( 2, 8,1993)[3][2]+magic_square( 2, 8,1993)[2][3]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[1][0]+magic_square(15,10,1995)[0][1]+magic_square(15,10,1995)[3][2]+magic_square(15,10,1995)[2][3]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[1][0]+magic_square(27, 8,1995)[0][1]+magic_square(27, 8,1995)[3][2]+magic_square(27, 8,1995)[2][3]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[1][0]+magic_square(26, 8,1991)[0][1]+magic_square(26, 8,1991)[3][2]+magic_square(26, 8,1991)[2][3]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[1][0]+magic_square(18,12,1960)[0][1]+magic_square(18,12,1960)[3][2]+magic_square(18,12,1960)[2][3]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[1][0]+magic_square(10, 6,1966)[0][1]+magic_square(10, 6,1966)[3][2]+magic_square(10, 6,1966)[2][3]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[1][0]+magic_square(18, 9,1988)[0][1]+magic_square(18, 9,1988)[3][2]+magic_square(18, 9,1988)[2][3]), 134);
}

TEST(MagicSquareTest, Combination2Tests) { 
    ASSERT_EQ((magic_square(28, 7,1998)[1][3]+magic_square(28, 7,1998)[0][2]+magic_square(28, 7,1998)[3][1]+magic_square(28, 7,1998)[2][0]), 152);
    ASSERT_EQ((magic_square(23, 5,1997)[1][3]+magic_square(23, 5,1997)[0][2]+magic_square(23, 5,1997)[3][1]+magic_square(23, 5,1997)[2][0]), 144);
    ASSERT_EQ((magic_square( 9,10,1996)[1][3]+magic_square( 9,10,1996)[0][2]+magic_square( 9,10,1996)[3][1]+magic_square( 9,10,1996)[2][0]), 134);
    ASSERT_EQ((magic_square( 2, 8,1993)[1][3]+magic_square( 2, 8,1993)[0][2]+magic_square( 2, 8,1993)[3][1]+magic_square( 2, 8,1993)[2][0]), 122);
    ASSERT_EQ((magic_square(15,10,1995)[1][3]+magic_square(15,10,1995)[0][2]+magic_square(15,10,1995)[3][1]+magic_square(15,10,1995)[2][0]), 139);
    ASSERT_EQ((magic_square(27, 8,1995)[1][3]+magic_square(27, 8,1995)[0][2]+magic_square(27, 8,1995)[3][1]+magic_square(27, 8,1995)[2][0]), 149);
    ASSERT_EQ((magic_square(26, 8,1991)[1][3]+magic_square(26, 8,1991)[0][2]+magic_square(26, 8,1991)[3][1]+magic_square(26, 8,1991)[2][0]), 144);
    ASSERT_EQ((magic_square(18,12,1960)[1][3]+magic_square(18,12,1960)[0][2]+magic_square(18,12,1960)[3][1]+magic_square(18,12,1960)[2][0]), 109);
    ASSERT_EQ((magic_square(10, 6,1966)[1][3]+magic_square(10, 6,1966)[0][2]+magic_square(10, 6,1966)[3][1]+magic_square(10, 6,1966)[2][0]), 101);
    ASSERT_EQ((magic_square(18, 9,1988)[1][3]+magic_square(18, 9,1988)[0][2]+magic_square(18, 9,1988)[3][1]+magic_square(18, 9,1988)[2][0]), 134);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
