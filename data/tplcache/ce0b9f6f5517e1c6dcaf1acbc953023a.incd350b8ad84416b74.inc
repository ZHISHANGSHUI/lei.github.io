<?php
$z[0]=Array("field","",34,62);
$z[0][4]=array();
$z[0][4]['name']="typeurl";
$z[1]=Array("field","",64,93);
$z[1][4]=array();
$z[1][4]['name']="typename";
$z[2]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);\r\n          @me=is_array(\$row)?'class=\"toggle-btn\"':'style=\"display:none\"';\r\n          ",103,393);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->\r\n            GetOne(\$sql);\r\n            @me=is_array(\$row)?'class=\"dropdown-nav nav-sb br sub-nav animated-fast fadeInUpMenu clearfix\"':'style=\"display:none\"';\r\n            ",453,817);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("channel","\r\n              <li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n              ",834,977);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[4][4]['noself']="yes";

?>