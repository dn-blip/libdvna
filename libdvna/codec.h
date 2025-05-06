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





typedef struct codec_t {
	const char* name; // The name of the codec
	const char* description; // A description of the codec
	int (*encode)(const FILE* input); // Function pointer for encoding
	int (*decode)(const FILE* input); // Function pointer for decoding
} codec_t;

// If you want to add a codec, you can do so by defining the codec_t structure's fields.


#endif
