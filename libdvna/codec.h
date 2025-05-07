// libdvna/codec.h -- The header file for the codec portion of libdvna.
// Handles encoding and decoding of audio files, with support for user-defined codecs.
// Author: Daniel Nzekwe
// License: MIT License

#ifndef LIBDVNA_CODEC
#define LIBDBVNA_CODEC

// Try not to depend on any other headers in this file.

// This struct has two fields:
// int code; the result code (0 for success, -1 for failure)
//const char* message;  A message describing the result.
typedef struct dvna_result {
	int code; 
	const char* message; 
} dvna_result_t;

#endif
