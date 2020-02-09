#ifndef DESVIOSTANDARD_H
#define DESVIOSTANDARD_H
#include <vector>
using namespace std;
template <typename Tipo>
 Tipo desvioStandard(vector<Tipo>);


float desvioStandard(int,float []);

template <typename Tipo>
void desvZona(vector<vector<Tipo>> &);

template <typename Tipo>
void desvDiagonal(vector<vector<Tipo>> &);
#endif
