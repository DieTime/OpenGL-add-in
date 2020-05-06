#ifndef I_MOVE_H
#define I_MOVE_H

class IMove {
public:
    virtual void move(float dx, float dy) = 0; // func for move shape on window
};

#endif //I_MOVE_H
