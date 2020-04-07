<?php
$z[0]=Array("global","",420,475);
$z[0][4]=array();
$z[0][4]['name']="keyword";
$z[0][4]['function']="RemoveXSS(@me)";
$z[1]=Array("global","",492,515);
$z[1][4]=array();
$z[1][4]['name']="cfg_name";
$z[2]=Array("field","",556,578);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",618,669);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",2531,2566);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("global","",2665,2720);
$z[5][4]=array();
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("list","\r\n      <article class=\"article-list br mb sb clearfix\">\r\n        <figure class=\"figure fl\"> <a class=\"thumbnail\" href=\"[field:arcurl/]\"> <img class=\"img-cover br\" src=\"[field:litpic/]\"> </a> </figure>\r\n        <div class=\"content\">\r\n          <h2 class=\"title ellipsis m-multi-ellipsis\"><a href=\"[field:arcurl/]\">[field:title /]</a></h2>\r\n          <p class=\"intro hidden-sm\">  [field:description function=\"cn_substr(@me,120)\"/] </p>\r\n          <p class=\"data clearfix\"> <span class=\"hidden-sm-md-lg author fl\"><i class=\"iconfont icon-user\"></i>[field:source /]</span>\r\n            <time class=\"time fl\" datetime=\"[field:pubdate function=\"GetDateMK(@me)\"/]\" title=\"[field:pubdate function=\"GetDateMK(@me)\"/]\">\r\n            <i class=\"iconfont icon-time\"></i>[field:pubdate function=\"GetDateMK(@me)\"/]\r\n            </time>\r\n            <span class=\"view fl\"><i class=\"iconfont icon-view\"></i>[field:click/]</span> <span class=\"hidden-sm-md-lg tag ellipsis fr\"> <i class=\"iconfont icon-tag\"></i> [field:id function=GetTags(@me)/]  </span> </p>\r\n        </div>\r\n      </article>\r\n      ",2916,4035);
$z[6][4]=array();
$z[6][4]['pagesize']="8";
$z[7]=Array("pagelist","",4115,4182);
$z[7][4]=array();
$z[7][4]['listsize']="2";
$z[7][4]['listitem']="index pre pageno next end";
$z[8]=Array("include","",4218,4254);
$z[8][4]=array();
$z[8][4]['filename']="right.htm";
$z[9]=Array("include","",4264,4299);
$z[9][4]=array();
$z[9][4]['filename']="foot.htm";

?>