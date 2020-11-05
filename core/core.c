#include <stdlib.h>

#define MEMORY_BUCKET 65536;

uint16_t *memory;

enum {
	R_R0 = 0,
	R_R1,
	R_R2,
	R_R3,
	R_R4,
	R_R5,
	R_R6,
	R_R7,
	R_PC,
	R_COND,
	R_COUNT
};

uint16_t reg[16];

enum {
	OP_BR = 0, // Branch
	OP_ADD, // Add
	OP_LD, // Load word
	OP_ST, // Store word
	OP_JSR, // Jump register
	OP_AND, // Logic AND
	OP_LDR, // Load register
	OP_STR, // Store register
	OP_RTI, // Unused
	OP_NOT, // Bitwise NOT
	OP_LDI, // Load immediate
	OP_STI, // Store immediate
	OP_JMP, // Jump
	OP_RES, // Reserved
	OP_LEA, // Load effective address
	OP_TRAP // Execute trap
};

enum {
	FL_POS = 1 << 0,
	FL_ZRO = 1 << 1,
	FL_NEG = 1 << 2
};

int main(int argc, const char* argv[]) {
	// Load arguments
	// Setup
	
	enum {PC_START = 0x3000};
	reg[R_PC] = PC_START;
	
	int running = 1;
	
	while(running) {
		
	}
};
