void display_scan_codes()
{
  char ch=0;
  while (ch!=27) {
    ? *SYS_CURRENT_SCAN_CODE,"\r\n";
    swap_in_next;
    ch=translate_scan_code;
  }
}

display_scan_codes;
;
 