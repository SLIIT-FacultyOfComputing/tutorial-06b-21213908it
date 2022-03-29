class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(double l);
       void setWidth(double w);
       void setHeight(double h); // write prototypes of setters for length, width and height
       int getLength();
       int getWidth();
       int getHeight();// write prototypes of getters for length, width and height
 
       int calcVolume();
};
