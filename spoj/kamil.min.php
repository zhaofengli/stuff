<?php $i=10;while($i){$l=str_split(fgets(STDIN));$n=1;foreach($l as$p)if(false!==strpos("TDLF",$p))$n*=2;echo"$n\n";$i--;}
