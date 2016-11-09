#ifndef DRW_H
#define DRW_H
void dwrite() {
/* If PCj wants does not want access send OK_TO_WRITE message to PCi. */

/* If PCj wants to access the file but it's request is later than PCi it
 * will send back OK_TO_WRITE.
 */

/*If PCj wants access and it's request is earlier than PCi it will delay
 * the OK_TO_WRITE message until it finishes the critical section process
 */
}

void dwrite() {
    
}
#endif // end DRW_H
