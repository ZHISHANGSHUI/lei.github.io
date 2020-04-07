<?php
$z[0]=Array("global","",362,385);
$z[0][4]=array();
$z[0][4]['name']="cfg_name";
$z[1]=Array("sql","[field:content function=\"cn_substr(Html2text(@me),320)\"/]",419,547);
$z[1][4]=array();
$z[1][4]['sql']="Select content from dede_arctype where id=7";
$z[2]=Array("arclist","\r\n            <li class=\"clearfix\"><span class=\"list list-1\">[field:global name=autoindex/].</span><a href=\"[field:arcurl/]\" title=\"[field:title /]\">[field:title /]</a></li>\r\n            ",1108,1376);
$z[2][4]=array();
$z[2][4]['titlelen']="45";
$z[2][4]['row']="10";
$z[2][4]['typeid']="all";
$z[2][4]['orderby']="click";
$z[3]=Array("arclist","\r\n            <li class=\"list clearfix\"><a href=\"[field:arcurl/]\" title=\"[field:title /]\"><span class=\"img-wrap\"><img src=\"[field:litpic/]\" alt=\"[field:title /]\" class=\"img-cover br random-img\"></span>\r\n              <div class=\"new-text\">\r\n                <p class=\"title\">[field:title /]</p>\r\n                <div class=\"info\"><span class=\"time\"><i class=\"iconfont icon-time\"></i>[field:pubdate function=\"GetDateMK(@me)\"/]</span><span class=\"comment\"><i class=\"iconfont icon-view\"></i>[field:click/]</span></div>\r\n              </div>\r\n              </a></li>\r\n            ",1651,2306);
$z[3][4]=array();
$z[3][4]['titlelen']="55";
$z[3][4]['row']="5";
$z[3][4]['typeid']="all";
$z[3][4]['orderby']="click";
$z[4]=Array("tag","\r\n            <li><a href='[field:link/]'>[field:tag /]</a></li>\r\n            ",2548,2667);
$z[4][4]=array();
$z[4][4]['row']="20";
$z[4][4]['getall']="1";

?>