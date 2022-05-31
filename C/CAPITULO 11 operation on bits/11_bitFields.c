/* 
      - bit operations can be used to converve  memory space in some computers
      - for exmaple a boolean we might store in a Boolean field (that use a bit) instead of a Char field (that use 8 bits or 1 byte)

    ** TWO WAYS TO PACK INFORMATION
      - we can store bits of different variables (number) in a unique package
 */

/* 
    255 (decimal) = 11111111 (binary) = 0xff  (hexadecimal)
 */

#include <stdio.h>

void exampleBitFieldsFromRightToLeft(){

  //even so never make assumptions about bit structure 
  struct packed_struct
  {
    unsigned int index:9;
    unsigned int type:4;
    unsigned int f3:1;
    unsigned int f2:1;
    unsigned int f1:1;
    unsigned int :3;
  };
}

void packageDataWithStruct(void){
  exampleBitFieldsFromRightToLeft()

  //one important thing about bit fields is that there is not guarantee whether the fields are internally from left to right or from right to left
  struct package_struct {
    unsigned int :3; //unnamed field with 3 bits
    unsigned int f1:1; //member with a bit
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18; //member with 18 bits
  
    int counter; //we can include normal data types
    /* 
      - a bit cannot dimensioned
      - we cannot have an array of fields such as flag:1[5]
      - we cannot take the address of a bit field
      - they are not such thing as "pointer to bit field"

      - The C compiler does not rearrange the bit field definitions to try to optimize storage space.
     */
  };
  struct package_struct pack;
  int n, bitExtracted;

  //we don't need to worry if "n" is too large tofit into the type field due that only the 8 lower order bits will be assigned to pack.type
  pack.type = n;

  //extracting bits
  bitExtracted = pack.type;

}
int main(void)
{
  /* 
      we can store the next five values in a integer named packed_data
        f1 = 0 (boolean)
        f1 = 1 (boolean)
        f1 = 1 (boolean)
        type = 0 to 255 (integer)
        index = 0 to 100000 (integer)
       
   */


  unsigned int packed_data, n;


  /* ---- the next code are ways to set eight bits for "type" value */
  /* ---- this strategy is named mask */
  packed_data |= n << 18;

  packed_data &= 0xfc03ffff;

  packed_data &= ~(0xff << 18);

  packed_data = (packed_data & ~(0xff << 18)) | ((n & 0xff) << 18);

  printf("packed_data = %x\n", packed_data);


  /* ================ setting 0 to a null value if we use AND operator */
  int w1 = 0343u, w2; //value w2 is null
  printf("w1 = %o\n", w1);
  w2 &= w1;

  printf("w2 = %o\n", w2);  // result afater AND operator is : 0

  packageDataWithStruct();
}

/* 
  end page 345
 */