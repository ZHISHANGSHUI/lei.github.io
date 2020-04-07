<li><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a> 
            <ul class="dropdown-nav nav-sb br sub-nav animated-fast fadeInUpMenu clearfix">
              {dede:channel type='son' noself='yes'}
              <li><a href="[field:typelink/]">[field:typename/]</a></li>
              {/dede:channel}
            </ul>
          </li>