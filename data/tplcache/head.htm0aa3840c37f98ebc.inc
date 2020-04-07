<?php
$z[0]=Array("global","",120,146);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",200,226);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",235,261);
$z[2][4]=array();
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","(@me==\"\")? @me=\"active\":@me=\"\";",1019,1100);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("channelartlist","\r\n          <li><a href=\"{dede:field name='typeurl'/}\" class=\"{dede:field.currentstyle/}\">{dede:field name='typename'/}</a><span {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);\r\n          @me=is_array(\$row)?'class=\"toggle-btn\"':'style=\"display:none\"';\r\n          {/dede:field}><i class=\"iconfont icon-down\"></i></span>\r\n            <ul {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->\r\n            GetOne(\$sql);\r\n            @me=is_array(\$row)?'class=\"dropdown-nav nav-sb br sub-nav animated-fast fadeInUpMenu clearfix\"':'style=\"display:none\"';\r\n            {/dede:field}>\r\n              {dede:channel type='son' noself='yes'}\r\n              <li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",1145,2282);
$z[4][4]=array();
$z[4][4]['row']="7";
$z[4][4]['typeid']="top";
$z[4][4]['currentstyle']="active";

?>