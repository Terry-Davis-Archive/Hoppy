void delay_zz()
{
  DWORD i;
  for (i=0;i<0x2333;i++);
}

void zigzag()
{
  DWORD i,j;
  
  btr(SYS_CURRENT_SCAN_CODE,16);
  while (!bt(SYS_CURRENT_SCAN_CODE,16)) {
    for (i=0;i<79;i++) { 
      spaces(i);
      ?"*\r\n";
      delay_zz;
    }
    for (i=79;i>0;i--) {
      spaces(i);
      ? "*\r\n";
      delay_zz;
    }
  }
}

zigzag;

  
 
 