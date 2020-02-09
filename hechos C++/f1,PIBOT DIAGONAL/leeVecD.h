#ifndef LEEVECD_H
#define LEEVECD_H
#include <vector>
#include <fstream>
using namespace std;

template <typename Tipo>
void leeMatD(int,int, vector<vector<Tipo>> &);
template <typename Tipo>
void leeVecD(int, vector<Tipo> & );
template <typename Tipo>
void leeVecD(vector<Tipo> &, fstream &, float & );
template <typename Tipo>
void generaVecAlAzar(vector<Tipo> & );
template <typename Tipo>
void generaVecAlAzarCre(vector<Tipo> & );
#endif
