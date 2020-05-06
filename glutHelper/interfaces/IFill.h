#ifndef I_FILL_H
#define I_FILL_H

class IFill {
protected:
    bool fill = false; // State of fill
public:
    bool getFill() { return fill; };
    void setFill(bool Fill) { fill = Fill; };
};

#endif //I_FILL_H