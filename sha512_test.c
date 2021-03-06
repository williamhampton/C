/* int SHA512_Init(SHA512_CTX *c); */
/* int SHA512_Update(SHA512_CTX *c, const void *data, size_t len); */
/* int SHA512_Final(unsigned char *md, SHA512_CTX *c); */
/* unsigned char *SHA512(const unsigned char *d, size_t n, unsigned char *md); */
/* void SHA512_Transform(SHA512_CTX *c, const unsigned char *data); */

#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

int main() {
  int i;
  SHA512_CTX ctx;
  unsigned char  md[SHA512_DIGEST_LENGTH];
  char* teststr="Hello Will\n";
  SHA512_Init(&ctx);
  SHA512_Update(&ctx, teststr, strlen(teststr));
  SHA512_Final(md, &ctx);

  for (i=0; i<SHA512_DIGEST_LENGTH; i++) {
    printf("%02x", md[i]);
  }
  printf("\n");
  

  return(0);
}
