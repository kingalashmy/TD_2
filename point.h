#ifndef    POINT_H 
#define    POINT_H 
class Point{
    private:
    float x ; 
    float y ; 
    public:
  Point(float initialX, float initialY) ; 

    void deplacer(float x_ , float y_ ); 
    void affiche (); 
}; 
#endif // endif