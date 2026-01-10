// 2 Tash yekie lazem nist hame chio dar namespace moshakhas
// Berizim mitunim dar ja haye mokhtalef darun hamun namespace
// Statement gharar bedim
namespace name
{
    constexpr double pi = 3.14;
}
namespace name
{
    constexpr double gravity = 2.145;
}

int main() {
    name::gravity;
    name::pi;
    namespace active = name; // Alias
    active::gravity;
    active::pi;
    return 0;
}
