<article class="article-list br mb sb clearfix">
        <figure class="figure fl"> <a class="thumbnail" href="[field:arcurl/]"> <img class="img-cover br" src="[field:litpic/]"> </a> </figure>
        <div class="content">
          <h2 class="title ellipsis m-multi-ellipsis"><a href="[field:arcurl/]">[field:title /]</a></h2>
          <p class="intro hidden-sm">  [field:description function="cn_substr(@me,120)"/] </p>
          <p class="data clearfix"> <span class="hidden-sm-md-lg author fl"><i class="iconfont icon-user"></i>[field:source /]</span>
            <time class="time fl" datetime="[field:pubdate function="GetDateMK(@me)"/]" title="[field:pubdate function="GetDateMK(@me)"/]">
            <i class="iconfont icon-time"></i>[field:pubdate function="GetDateMK(@me)"/]
            </time>
            <span class="view fl"><i class="iconfont icon-view"></i>[field:click/]</span> <span class="hidden-sm-md-lg tag ellipsis fr"> <i class="iconfont icon-tag"></i> [field:id function=GetTags(@me)/]  </span> </p>
        </div>
      </article>