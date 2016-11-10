#ifndef DRW_H
#define DRW_H

typedef struct vector_clock;
typedef struct {
    int id;
    int *clock;
    vector_clock() {
        char *fn = (char*)id;
        FILE *fp = fopen(fn, "a");
    }

    void done() {
        clock[id] = 0;
    }
} vector_clock;

typedef enum {WRITE, OK_TO_WRITE, READING} message;

void dwrite() {
/* If PCj wants does not want access send OK_TO_WRITE message to PCi. */

/* If PCj wants to access the file but it's request is later than PCi it
 * will send back OK_TO_WRITE.
 */

/*If PCj wants access and it's request is earlier than PCi it will delay
 * the OK_TO_WRITE message until it finishes the critical section process
 */
}

void dread() {
    
}
#endif // end DRW_H
