#include <iostream>
#include <cstdint>
#include <stdint.h>
std::int8_t; // <cstdint>
int8_t; // <stdint.h>

int main() {

    //-----------------------------//
    std::int8_t _8bit; // -128 Ta 127
    std::uint8_t _u8bit; // 0 Ta 255
    //-----------------------------//
    std::int16_t _16bit; // -32768 Ta 32767
    std::uint16_t _u16bit; // 0 Ta 65535
    //-----------------------------//
    std::int32_t _32bit; // -2,147,483,648 Ta 2,147,483,647
    std::uint32_t _u32bit; // 0 Ta 4,294,967,295
    //-----------------------------//
    std::int64_t _64bit; // -9,223,372,036,854,775,808 Ta 9,223,372,036,854,775,807
    std::uint64_t _u64bit; // 0 Ta 18,446,744,073,709,551,615
    //-----------------------------//
    std::int_fast8_t _fast8;
    std::uint_fast8_t _ufast8;
    //-----------------------------//
    std::int_fast16_t _fast16;
    std::uint_fast16_t _ufast16;
    //-----------------------------//
    std::int_fast32_t _fast32;
    std::uint_fast32_t _ufast32;
    //-----------------------------//
    std::int_fast64_t _fast64;
    std::uint_fast64_t _ufast64;
    //-----------------------------//
    std::int_least8_t _least8;
    std::uint_least8_t _uleast8;
    //-----------------------------//
    std::int_least16_t _least16;
    std::uint_least16_t _uleast16;
    //-----------------------------//
    std::int_least32_t _least32;
    std::uint_least32_t _uleast32;
    //-----------------------------//
    std::int_least64_t _least64;
    std::uint_least64_t _uleast64;
    //-----------------------------//

    return 0;
}