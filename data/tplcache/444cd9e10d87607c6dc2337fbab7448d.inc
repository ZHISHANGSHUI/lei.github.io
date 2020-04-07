<li><a href="{dede:field name='typeurl'/}" class="{dede:field.currentstyle/}">{dede:field name='typename'/}</a><span {dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->GetOne($sql);
          @me=is_array($row)?'class="toggle-btn"':'style="display:none"';
          {/dede:field}><i class="iconfont icon-down"></i></span>
            <ul {dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->
            GetOne($sql);
            @me=is_array($row)?'class="dropdown-nav nav-sb br sub-nav animated-fast fadeInUpMenu clearfix"':'style="display:none"';
            {/dede:field}>
              {dede:channel type='son' noself='yes'}
              <li><a href="[field:typelink/]">[field:typename/]</a></li>
              {/dede:channel}
            </ul>
          </li>