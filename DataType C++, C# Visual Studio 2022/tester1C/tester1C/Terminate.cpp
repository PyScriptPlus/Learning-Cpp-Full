// Dastorat dige Halt be esm Terminate hast ke ziad ba exceptions ha mored estefade
// Gharar migire ama mishe tanhayi ham estefade kard
// Vaghti terminate() call beshe be sorat Default function abort() ham call mishe
// terminate() ro goto definition koni mibini function abort() ham onjas !!!

#include <exception>

int main() {
	std::terminate();
}