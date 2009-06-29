



<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
  <head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8" />
        <title>roomba/src/Communication.cpp at 96b35c6b6658c617b0698b7856bb48f922970dcb from fraggytheundead's OC-Praktikum - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="http://github.com/fluidicon.png" title="GitHub" />

    
      <link href="http://assets0.github.com/stylesheets/bundle.css?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" media="screen" rel="stylesheet" type="text/css" />
    

    
      
        <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.3.2/jquery.min.js"></script>
        <script src="http://assets2.github.com/javascripts/bundle.js?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" type="text/javascript"></script>
      
    
    
  
    
  

  <link href="http://github.com/feeds/fraggytheundead/commits/OC-Praktikum/96b35c6b6658c617b0698b7856bb48f922970dcb" rel="alternate" title="Recent Commits to OC-Praktikum:96b35c6b6658c617b0698b7856bb48f922970dcb" type="application/atom+xml" />

    <meta name="description" content="" />


    

    <script type="text/javascript">
      github_user = null
    </script>
  </head>

  

  <body>
    

    <div id="main">
      <div id="header" class="">
        <div class="site">
          <div class="logo">
            <a href="http://github.com"><img src="/images/modules/header/logov3.png" alt="github" /></a>
          </div>
          
            <div class="topsearch">
  <form action="/search" id="top_search_form" method="get">
    <input type="search" class="search" name="q" /> <input type="submit" value="Search" />
    <input type="hidden" name="type" value="Everything" />
    <input type="hidden" name="repo" value="" />
    <input type="hidden" name="langOverride" value="" />
    <input type="hidden" name="start_value" value="1" />
  </form>
  <div class="links">
    <a href="/repositories">Browse</a> | <a href="/guides">Guides</a> | <a href="/search">Advanced</a>
  </div>
</div>
          
          
            <div class="actions">
              <a href="http://github.com">Home</a>
              <a href="/plans"><b><u>Pricing and Signup</u></b></a>
              <a href="http://github.com/popular/forked">Repositories</a>
              
              <a href="/blog">Blog</a>
              <a href="https://github.com/login">Login</a>
            </div>
          
        </div>
      </div>

      
        
    <div id="repo_menu">
      <div class="site">
        <ul>
          
            <li class="active"><a href="http://github.com/fraggytheundead/OC-Praktikum/tree/">Source</a></li>

            <li class=""><a href="http://github.com/fraggytheundead/OC-Praktikum/commits/">Commits</a></li>

            
            <li class=""><a href="/fraggytheundead/OC-Praktikum/network">Network (7)</a></li>

            

            

            
              
              <li class=""><a href="/fraggytheundead/OC-Praktikum/downloads">Downloads (0)</a></li>
            

            
              
              <li class=""><a href="http://wiki.github.com/fraggytheundead/OC-Praktikum">Wiki (1)</a></li>
            

            <li class=""><a href="/fraggytheundead/OC-Praktikum/graphs">Graphs</a></li>

            

          
        </ul>
      </div>
    </div>

  <div id="repo_sub_menu">
    <div class="site">
      <div class="joiner"></div>
      

      

      

      
    </div>
  </div>

  <div class="site">
    





<div id="repos">
  


<script type="text/javascript">
  GitHub.currentCommitRef = "96b35c6b6658c617b0698b7856bb48f922970dcb"
  GitHub.currentRepoOwner = "fraggytheundead"
  GitHub.currentRepo = "OC-Praktikum"
  
</script>



  <div class="repo public" id="repo_details">
    <div class="title">
      <div class="path">
        <a href="/fraggytheundead">fraggytheundead</a> / <b><a href="http://github.com/fraggytheundead/OC-Praktikum/tree">OC-Praktikum</a></b>

        

          <span id="edit_button" style="display:none;">
            <a href="/fraggytheundead/OC-Praktikum/edit"><img alt="edit" class="button" src="http://assets3.github.com/images/modules/repos/edit_button.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></a>
          </span>

          
            <span id="pull_request_button" style="display:none;">
              <a href="/fraggytheundead/OC-Praktikum/pull_request/" class="pull_request_button"><img alt="pull request" class="button" src="http://assets3.github.com/images/modules/repos/pull_request_button.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></a>
            </span>
            
            <span id="fast_forward_button" style="display:none;">
              <a href="/fraggytheundead/OC-Praktikum/fast_forward" id="ff_button"><img alt="fast forward" class="button" src="http://assets2.github.com/images/modules/repos/fast_forward_button.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></a>
            </span>

            <span id="fork_button">
              <a href="/fraggytheundead/OC-Praktikum/fork"><img alt="fork" class="button" src="http://assets3.github.com/images/modules/repos/fork_button.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></a>
            </span>
          

          <span id="watch_button">
            <a href="/fraggytheundead/OC-Praktikum/toggle_watch" class="toggle_watch"><img alt="watch" class="button" src="http://assets2.github.com/images/modules/repos/watch_button.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></a>
          </span>
          
          <span id="unwatch_button" style="display:none;">
            <a href="/fraggytheundead/OC-Praktikum/toggle_watch" class="toggle_watch"><img alt="watch" class="button" src="http://assets2.github.com/images/modules/repos/unwatch_button.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></a>
          </span>

          
            <a href="#" id="download_button" rel="fraggytheundead/OC-Praktikum"><img alt="download tarball" class="button" src="http://assets1.github.com/images/modules/repos/download_button.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></a>
          
        
      </div>

      <div class="security private_security" style="display:none">
        <a href="#private_repo" rel="facebox"><img src="/images/icons/private.png" alt="private" /></a>
      </div>

      <div id="private_repo" class="hidden">
        This repository is private.
        All pages are served over SSL and all pushing and pulling is done over SSH.
        No one may fork, clone, or view it unless they are added as a <a href="/fraggytheundead/OC-Praktikum/edit">member</a>.

        <br/>
        <br/>
        Every repository with this icon (<img src="/images/icons/private.png" alt="private" />) is private.
      </div>

      <div class="security public_security" style="">
        <a href="#public_repo" rel="facebox"><img src="/images/icons/public.png" alt="public" /></a>
      </div>

      <div id="public_repo" class="hidden">
        This repository is public.
        Anyone may fork, clone, or view it.

        <br/>
        <br/>
        Every repository with this icon (<img src="/images/icons/public.png" alt="public" />) is public.
      </div>

      

        <div class="flexipill">
          <a href="/fraggytheundead/OC-Praktikum/network">
          <table cellpadding="0" cellspacing="0">
            <tr><td><img alt="Forks" src="http://assets0.github.com/images/modules/repos/pills/forks.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></td><td class="middle"><span>7</span></td><td><img alt="Right" src="http://assets0.github.com/images/modules/repos/pills/right.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></td></tr>
          </table>
          </a>
        </div>

        <div class="flexipill">
          <a href="/fraggytheundead/OC-Praktikum/watchers">
          <table cellpadding="0" cellspacing="0">
            <tr><td><img alt="Watchers" src="http://assets3.github.com/images/modules/repos/pills/watchers.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></td><td class="middle"><span>3</span></td><td><img alt="Right" src="http://assets0.github.com/images/modules/repos/pills/right.png?4f456ffbcd811a65b6ee50b4c696e5ba43ef5d26" /></td></tr>
          </table>
          </a>
        </div>
      </div>

    <div class="meta">
      <table>
        
          <tr>
            <td class="label" colspan="2">
              <em>Fork of <a href="/haelmy/OC-Praktikum/tree">haelmy/OC-Praktikum</a></em>
            </td>
          </tr>
        
        <tr>
          <td class="label">Description:</td>
          <td>
            <span id="repository_description" rel="/fraggytheundead/OC-Praktikum/edit/update"></span>
            <a href="#description" class="edit_link action" style="display:none;">edit</a>
          </td>
        </tr>

        
            <tr>
              <td class="label">Homepage:</td>
              <td>
                                
                <span id="repository_homepage" rel="/fraggytheundead/OC-Praktikum/edit/update">
                  <a href="http://"></a>
                </span>
                <a href="#homepage" class="edit_link action" style="display:none;">edit</a>
              </td>
            </tr>

          
            <tr>
              <td class="label"><span id="public_clone_text" style="display:none;">Public&nbsp;</span>Clone&nbsp;URL:</td>
              
              <td>
                <a href="git://github.com/fraggytheundead/OC-Praktikum.git" class="git_url_facebox" rel="#git-clone">git://github.com/fraggytheundead/OC-Praktikum.git</a>
                      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="/flash/clippy.swf"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="text=git://github.com/fraggytheundead/OC-Praktikum.git">
      <param name="bgcolor" value="#F0F0F0">
      <param name="wmode" value="opaque">
      <embed src="/flash/clippy.swf"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="text=git://github.com/fraggytheundead/OC-Praktikum.git"
             bgcolor="#F0F0F0"
             wmode="opaque"
      />
      </object>

                <div id="git-clone" style="display:none;">
                  Give this clone URL to anyone.
                  <br/>
                  <code>git clone git://github.com/fraggytheundead/OC-Praktikum.git </code>
                </div>
              </td>
            </tr>
          
          
          <tr id="private_clone_url" style="display:none;">
            <td class="label">Your Clone URL:</td>
            
            <td>

              <div id="private-clone-url">
                <a href="git@github.com:fraggytheundead/OC-Praktikum.git" class="git_url_facebox" rel="#your-git-clone">git@github.com:fraggytheundead/OC-Praktikum.git</a>
                <input type="text" value="git@github.com:fraggytheundead/OC-Praktikum.git" style="display: none;" />
                      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="/flash/clippy.swf"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="text=git@github.com:fraggytheundead/OC-Praktikum.git">
      <param name="bgcolor" value="#F0F0F0">
      <param name="wmode" value="opaque">
      <embed src="/flash/clippy.swf"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="text=git@github.com:fraggytheundead/OC-Praktikum.git"
             bgcolor="#F0F0F0"
             wmode="opaque"
      />
      </object>

              </div>

              <div id="your-git-clone" style="display:none;">
                Use this clone URL yourself.
                <br/>
                <code>git clone git@github.com:fraggytheundead/OC-Praktikum.git </code>
              </div>
            </td>
          </tr>
          
          

          

          
      </table>

          </div>
  </div>






</div>


  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/fraggytheundead/OC-Praktikum/commit/96b35c6b6658c617b0698b7856bb48f922970dcb">return of the linker error... (size of symbol...)</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img alt="" height="30" src="http://www.gravatar.com/avatar/1fe1ba884bc511c55c72b175ceb29ea7?s=30&amp;d=http%3A%2F%2Fgithub.com%2Fimages%2Fgravatars%2Fgravatar-30.png" width="30" />
        </div>
        <div class="name"><a href="/fraggytheundead">fraggytheundead</a> <span>(author)</span></div>
          <div class="date">
            <abbr class="relatize" title="2009-06-23 07:53:09">Tue Jun 23 07:53:09 -0700 2009</abbr> 
          </div>
      </div>
  
      
  
    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/fraggytheundead/OC-Praktikum/commit/96b35c6b6658c617b0698b7856bb48f922970dcb" hotkey="c">96b35c6b6658c617b0698b7856bb48f922970dcb</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/fraggytheundead/OC-Praktikum/tree/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba/src/Communication.cpp" hotkey="t">ee5e36566d444c330162a1d93a6b6fd071997cc9</a><br />
  
      
        <span>p</span>arent&nbsp;
        
        <a href="/fraggytheundead/OC-Praktikum/commit/b523a129d614b2e826fa908b6a5ab0ad22d60bb0" hotkey="p">b523a129d614b2e826fa908b6a5ab0ad22d60bb0</a>
      
  
    </div>
  </div>

    </div>
  </div>



  
    <div id="path">
      <b><a href="/fraggytheundead/OC-Praktikum/tree">OC-Praktikum</a></b> / <a href="/fraggytheundead/OC-Praktikum/tree/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba">roomba</a> / <a href="/fraggytheundead/OC-Praktikum/tree/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba/src">src</a> / Communication.cpp       <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="/flash/clippy.swf"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="text=roomba/src/Communication.cpp">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="/flash/clippy.swf"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="text=roomba/src/Communication.cpp"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>

    </div>

    <div id="files">
      <div class="file">
        <div class="meta">
          <div class="info">
            <span>100644</span>
            <span>165 lines (139 sloc)</span>
            <span>4.892 kb</span>
          </div>
          <div class="actions">
            
            <a href="/fraggytheundead/OC-Praktikum/raw/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba/src/Communication.cpp" id="raw-url">raw</a>
            
              <a href="/fraggytheundead/OC-Praktikum/blame/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba/src/Communication.cpp">blame</a>
            
            <a href="/fraggytheundead/OC-Praktikum/commits/master/roomba/src/Communication.cpp">history</a>
          </div>
        </div>
        
  <div class="data syntax">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            
            <pre class="line_numbers">
<span id="LID1" rel="#L1">1</span>
<span id="LID2" rel="#L2">2</span>
<span id="LID3" rel="#L3">3</span>
<span id="LID4" rel="#L4">4</span>
<span id="LID5" rel="#L5">5</span>
<span id="LID6" rel="#L6">6</span>
<span id="LID7" rel="#L7">7</span>
<span id="LID8" rel="#L8">8</span>
<span id="LID9" rel="#L9">9</span>
<span id="LID10" rel="#L10">10</span>
<span id="LID11" rel="#L11">11</span>
<span id="LID12" rel="#L12">12</span>
<span id="LID13" rel="#L13">13</span>
<span id="LID14" rel="#L14">14</span>
<span id="LID15" rel="#L15">15</span>
<span id="LID16" rel="#L16">16</span>
<span id="LID17" rel="#L17">17</span>
<span id="LID18" rel="#L18">18</span>
<span id="LID19" rel="#L19">19</span>
<span id="LID20" rel="#L20">20</span>
<span id="LID21" rel="#L21">21</span>
<span id="LID22" rel="#L22">22</span>
<span id="LID23" rel="#L23">23</span>
<span id="LID24" rel="#L24">24</span>
<span id="LID25" rel="#L25">25</span>
<span id="LID26" rel="#L26">26</span>
<span id="LID27" rel="#L27">27</span>
<span id="LID28" rel="#L28">28</span>
<span id="LID29" rel="#L29">29</span>
<span id="LID30" rel="#L30">30</span>
<span id="LID31" rel="#L31">31</span>
<span id="LID32" rel="#L32">32</span>
<span id="LID33" rel="#L33">33</span>
<span id="LID34" rel="#L34">34</span>
<span id="LID35" rel="#L35">35</span>
<span id="LID36" rel="#L36">36</span>
<span id="LID37" rel="#L37">37</span>
<span id="LID38" rel="#L38">38</span>
<span id="LID39" rel="#L39">39</span>
<span id="LID40" rel="#L40">40</span>
<span id="LID41" rel="#L41">41</span>
<span id="LID42" rel="#L42">42</span>
<span id="LID43" rel="#L43">43</span>
<span id="LID44" rel="#L44">44</span>
<span id="LID45" rel="#L45">45</span>
<span id="LID46" rel="#L46">46</span>
<span id="LID47" rel="#L47">47</span>
<span id="LID48" rel="#L48">48</span>
<span id="LID49" rel="#L49">49</span>
<span id="LID50" rel="#L50">50</span>
<span id="LID51" rel="#L51">51</span>
<span id="LID52" rel="#L52">52</span>
<span id="LID53" rel="#L53">53</span>
<span id="LID54" rel="#L54">54</span>
<span id="LID55" rel="#L55">55</span>
<span id="LID56" rel="#L56">56</span>
<span id="LID57" rel="#L57">57</span>
<span id="LID58" rel="#L58">58</span>
<span id="LID59" rel="#L59">59</span>
<span id="LID60" rel="#L60">60</span>
<span id="LID61" rel="#L61">61</span>
<span id="LID62" rel="#L62">62</span>
<span id="LID63" rel="#L63">63</span>
<span id="LID64" rel="#L64">64</span>
<span id="LID65" rel="#L65">65</span>
<span id="LID66" rel="#L66">66</span>
<span id="LID67" rel="#L67">67</span>
<span id="LID68" rel="#L68">68</span>
<span id="LID69" rel="#L69">69</span>
<span id="LID70" rel="#L70">70</span>
<span id="LID71" rel="#L71">71</span>
<span id="LID72" rel="#L72">72</span>
<span id="LID73" rel="#L73">73</span>
<span id="LID74" rel="#L74">74</span>
<span id="LID75" rel="#L75">75</span>
<span id="LID76" rel="#L76">76</span>
<span id="LID77" rel="#L77">77</span>
<span id="LID78" rel="#L78">78</span>
<span id="LID79" rel="#L79">79</span>
<span id="LID80" rel="#L80">80</span>
<span id="LID81" rel="#L81">81</span>
<span id="LID82" rel="#L82">82</span>
<span id="LID83" rel="#L83">83</span>
<span id="LID84" rel="#L84">84</span>
<span id="LID85" rel="#L85">85</span>
<span id="LID86" rel="#L86">86</span>
<span id="LID87" rel="#L87">87</span>
<span id="LID88" rel="#L88">88</span>
<span id="LID89" rel="#L89">89</span>
<span id="LID90" rel="#L90">90</span>
<span id="LID91" rel="#L91">91</span>
<span id="LID92" rel="#L92">92</span>
<span id="LID93" rel="#L93">93</span>
<span id="LID94" rel="#L94">94</span>
<span id="LID95" rel="#L95">95</span>
<span id="LID96" rel="#L96">96</span>
<span id="LID97" rel="#L97">97</span>
<span id="LID98" rel="#L98">98</span>
<span id="LID99" rel="#L99">99</span>
<span id="LID100" rel="#L100">100</span>
<span id="LID101" rel="#L101">101</span>
<span id="LID102" rel="#L102">102</span>
<span id="LID103" rel="#L103">103</span>
<span id="LID104" rel="#L104">104</span>
<span id="LID105" rel="#L105">105</span>
<span id="LID106" rel="#L106">106</span>
<span id="LID107" rel="#L107">107</span>
<span id="LID108" rel="#L108">108</span>
<span id="LID109" rel="#L109">109</span>
<span id="LID110" rel="#L110">110</span>
<span id="LID111" rel="#L111">111</span>
<span id="LID112" rel="#L112">112</span>
<span id="LID113" rel="#L113">113</span>
<span id="LID114" rel="#L114">114</span>
<span id="LID115" rel="#L115">115</span>
<span id="LID116" rel="#L116">116</span>
<span id="LID117" rel="#L117">117</span>
<span id="LID118" rel="#L118">118</span>
<span id="LID119" rel="#L119">119</span>
<span id="LID120" rel="#L120">120</span>
<span id="LID121" rel="#L121">121</span>
<span id="LID122" rel="#L122">122</span>
<span id="LID123" rel="#L123">123</span>
<span id="LID124" rel="#L124">124</span>
<span id="LID125" rel="#L125">125</span>
<span id="LID126" rel="#L126">126</span>
<span id="LID127" rel="#L127">127</span>
<span id="LID128" rel="#L128">128</span>
<span id="LID129" rel="#L129">129</span>
<span id="LID130" rel="#L130">130</span>
<span id="LID131" rel="#L131">131</span>
<span id="LID132" rel="#L132">132</span>
<span id="LID133" rel="#L133">133</span>
<span id="LID134" rel="#L134">134</span>
<span id="LID135" rel="#L135">135</span>
<span id="LID136" rel="#L136">136</span>
<span id="LID137" rel="#L137">137</span>
<span id="LID138" rel="#L138">138</span>
<span id="LID139" rel="#L139">139</span>
<span id="LID140" rel="#L140">140</span>
<span id="LID141" rel="#L141">141</span>
<span id="LID142" rel="#L142">142</span>
<span id="LID143" rel="#L143">143</span>
<span id="LID144" rel="#L144">144</span>
<span id="LID145" rel="#L145">145</span>
<span id="LID146" rel="#L146">146</span>
<span id="LID147" rel="#L147">147</span>
<span id="LID148" rel="#L148">148</span>
<span id="LID149" rel="#L149">149</span>
<span id="LID150" rel="#L150">150</span>
<span id="LID151" rel="#L151">151</span>
<span id="LID152" rel="#L152">152</span>
<span id="LID153" rel="#L153">153</span>
<span id="LID154" rel="#L154">154</span>
<span id="LID155" rel="#L155">155</span>
<span id="LID156" rel="#L156">156</span>
<span id="LID157" rel="#L157">157</span>
<span id="LID158" rel="#L158">158</span>
<span id="LID159" rel="#L159">159</span>
<span id="LID160" rel="#L160">160</span>
<span id="LID161" rel="#L161">161</span>
<span id="LID162" rel="#L162">162</span>
<span id="LID163" rel="#L163">163</span>
<span id="LID164" rel="#L164">164</span>
<span id="LID165" rel="#L165">165</span>
</pre>
          </td>
          <td width="100%">
            
            
              <div class="highlight"><pre><div class="line" id="LC1"><span class="c">/* ----------------------------------------------------------------------</span></div><div class="line" id="LC2"><span class="c"> * This file is part of the WISEBED project.</span></div><div class="line" id="LC3"><span class="c"> * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck</span></div><div class="line" id="LC4"><span class="c"> * This is free software; you can redistribute it and/or modify it</span></div><div class="line" id="LC5"><span class="c"> * under the terms of the BSD License. Refer to bsd-licence.txt</span></div><div class="line" id="LC6"><span class="c"> * file in the root of the source tree for further details.</span></div><div class="line" id="LC7"><span class="c">------------------------------------------------------------------------*/</span></div><div class="line" id="LC8">&nbsp;</div><div class="line" id="LC9"><span class="cp">#include &lt;isense/isense_memory.h&gt;</span></div><div class="line" id="LC10"><span class="cp">#include &lt;isense/uart.h&gt;</span></div><div class="line" id="LC11"><span class="cp">#include &lt;isense/util/util.h&gt;</span></div><div class="line" id="LC12"><span class="cp">#include &lt;isense/protocols/routing/flooding.h&gt;</span></div><div class="line" id="LC13"><span class="cp">#include &quot;Communication.h&quot;</span></div><div class="line" id="LC14"><span class="cp">#include &quot;roombatest.h&quot;</span></div><div class="line" id="LC15"><span class="cp">#include &quot;RobotLogic.h&quot;</span></div><div class="line" id="LC16">&nbsp;</div><div class="line" id="LC17"><span class="n">Communication</span><span class="o">::</span><span class="n">Communication</span><span class="p">(</span><span class="n">isense</span><span class="o">::</span><span class="n">Os</span><span class="o">&amp;</span> <span class="n">os</span><span class="p">)</span> <span class="o">:</span></div><div class="line" id="LC18">&nbsp;&nbsp;<span class="n">m_os</span><span class="p">(</span><span class="n">os</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC19"><span class="p">}</span></div><div class="line" id="LC20">&nbsp;</div><div class="line" id="LC21"><span class="n">Communication</span><span class="o">::~</span><span class="n">Communication</span><span class="p">()</span> <span class="p">{</span></div><div class="line" id="LC22"><span class="p">}</span></div><div class="line" id="LC23">&nbsp;</div><div class="line" id="LC24"><span class="c">/*DEMO wie man die Daten zum Beispiel uebergibt</span></div><div class="line" id="LC25"><span class="c"> anders geht es nicht, weil c++ alle Groessen des Arrays ausser der ersten Groesse wissen will/muss</span></div><div class="line" id="LC26"><span class="c"> Eure Testeingaben, funktionieren zwar beim ruebergeben, aber beim initialisieren, haengt er die Daten einfach an einander und erstellt gar kein 3D Dimensionales Array</span></div><div class="line" id="LC27"><span class="c"> Deswegen koennen wir auch kein *paramList[][] erwarten, da sonst die Dimensionen fest stehen muessten, sprich so *paramList[2][2]</span></div><div class="line" id="LC28">&nbsp;</div><div class="line" id="LC29"><span class="c"> uint8 taskListLength = 4;</span></div><div class="line" id="LC30"><span class="c"> const char* taskList[]={&quot;taska&quot;,&quot;taskb&quot;,&quot;taskc&quot;,&quot;taskd&quot;};</span></div><div class="line" id="LC31"><span class="c"> const char*** paramList;</span></div><div class="line" id="LC32">&nbsp;</div><div class="line" id="LC33"><span class="c"> const uint8 paramListLength[]={2,2,0,0};</span></div><div class="line" id="LC34">&nbsp;</div><div class="line" id="LC35"><span class="c"> #define STRING_MATRIX_NEW(len) ((const char ***)malloc(sizeof (const char **) * len))</span></div><div class="line" id="LC36"><span class="c"> #define STRING_ARRAY_NEW(len) ((const char **)malloc(sizeof (const char *) * len))</span></div><div class="line" id="LC37">&nbsp;</div><div class="line" id="LC38"><span class="c"> paramList = STRING_MATRIX_NEW (taskListLength);</span></div><div class="line" id="LC39"><span class="c"> for (int i = 0; i &lt; taskListLength; ++i)</span></div><div class="line" id="LC40"><span class="c"> paramList[i] = STRING_ARRAY_NEW (paramListLength[i]);</span></div><div class="line" id="LC41">&nbsp;</div><div class="line" id="LC42"><span class="c"> paramList[0][0] = &quot;a-1&quot;;</span></div><div class="line" id="LC43"><span class="c"> paramList[0][1] = &quot;a-2&quot;;</span></div><div class="line" id="LC44"><span class="c"> paramList[1][0] = &quot;b-1&quot;;</span></div><div class="line" id="LC45"><span class="c"> paramList[1][1] = &quot;b-2&quot;;</span></div><div class="line" id="LC46">&nbsp;</div><div class="line" id="LC47">&nbsp;</div><div class="line" id="LC48"><span class="c"> skeleton-&gt;sendFeatures(JennicOs::os_pointer()-&gt;id(), taskListLength, taskList, paramListLength, paramList);</span></div><div class="line" id="LC49">&nbsp;</div><div class="line" id="LC50"><span class="c"> for (int i = 0; i &lt; taskListLength; ++i)</span></div><div class="line" id="LC51"><span class="c"> free (paramList[i]);</span></div><div class="line" id="LC52"><span class="c"> free (paramList);</span></div><div class="line" id="LC53"><span class="c"> */</span></div><div class="line" id="LC54">&nbsp;</div><div class="line" id="LC55"><span class="n">uint8</span> <span class="n">Communication</span><span class="o">::</span><span class="n">sendFeatures</span><span class="p">(</span><span class="n">uint16</span> <span class="n">robotId</span><span class="p">,</span> <span class="n">uint8</span> <span class="n">taskListLength</span><span class="p">,</span></div><div class="line" id="LC56">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">**</span> <span class="n">taskList</span><span class="p">,</span> <span class="k">const</span> <span class="n">uint8</span> <span class="o">*</span> <span class="n">paramListLength</span><span class="p">,</span></div><div class="line" id="LC57">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">***</span> <span class="n">paramList</span><span class="p">,</span> <span class="n">uint8</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC58">&nbsp;</div><div class="line" id="LC59">&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">len</span> <span class="o">=</span> <span class="mi">4</span> <span class="o">+</span> <span class="n">taskListLength</span><span class="p">;</span></div><div class="line" id="LC60">&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">taskListCharLen</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class="line" id="LC61">&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">taskListLength</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC62">&nbsp;&nbsp;&nbsp;&nbsp;<span class="c">//calculate amount of bytes we need for the task list.</span></div><div class="line" id="LC63">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">tmp</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">taskList</span><span class="p">[</span><span class="n">i</span><span class="p">])</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span></div><div class="line" id="LC64">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">len</span> <span class="o">+=</span> <span class="n">tmp</span><span class="p">;</span></div><div class="line" id="LC65">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">taskListCharLen</span> <span class="o">+=</span> <span class="n">tmp</span><span class="p">;</span></div><div class="line" id="LC66">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">paramListLength</span><span class="p">[</span><span class="n">i</span><span class="p">];</span> <span class="o">++</span><span class="n">j</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC67">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">len</span> <span class="o">+=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">paramList</span><span class="p">[</span><span class="n">i</span><span class="p">][</span><span class="n">j</span><span class="p">])</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span></div><div class="line" id="LC68">&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC69">&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC70">&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">len</span> <span class="o">&lt;</span> <span class="mi">112</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC71">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="mi">203</span><span class="p">;</span></div><div class="line" id="LC72">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">robotId</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class="line" id="LC73">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="n">robotId</span><span class="p">;</span></div><div class="line" id="LC74">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="mi">3</span><span class="p">]</span> <span class="o">=</span> <span class="n">taskListLength</span><span class="p">;</span></div><div class="line" id="LC75">&nbsp;</div><div class="line" id="LC76">&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">pos</span> <span class="o">=</span> <span class="mi">4</span><span class="p">;</span></div><div class="line" id="LC77">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">taskListLength</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC78">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="n">pos</span><span class="o">++</span><span class="p">]</span> <span class="o">=</span> <span class="n">paramListLength</span><span class="p">[</span><span class="n">i</span><span class="p">];</span></div><div class="line" id="LC79">&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC80">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">taskListLength</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC81">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">str_len</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">taskList</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class="line" id="LC82">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">memcpy</span><span class="p">(</span><span class="o">&amp;</span><span class="n">buf</span><span class="p">[</span><span class="n">pos</span><span class="p">],</span> <span class="n">taskList</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">str_len</span><span class="p">);</span></div><div class="line" id="LC83">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="n">pos</span> <span class="o">+</span> <span class="n">str_len</span><span class="p">]</span> <span class="o">=</span> <span class="sc">&#39;\0&#39;</span><span class="p">;</span></div><div class="line" id="LC84">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pos</span> <span class="o">+=</span> <span class="n">str_len</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span></div><div class="line" id="LC85">&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC86">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">taskListLength</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC87">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">paramListLength</span><span class="p">[</span><span class="n">i</span><span class="p">];</span> <span class="o">++</span><span class="n">j</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC88">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">str_len</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">paramList</span><span class="p">[</span><span class="n">i</span><span class="p">][</span><span class="n">j</span><span class="p">]);</span></div><div class="line" id="LC89">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">memcpy</span><span class="p">(</span><span class="o">&amp;</span><span class="n">buf</span><span class="p">[</span><span class="n">pos</span><span class="p">],</span> <span class="n">paramList</span><span class="p">[</span><span class="n">i</span><span class="p">][</span><span class="n">j</span><span class="p">],</span> <span class="n">str_len</span><span class="p">);</span></div><div class="line" id="LC90">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="n">pos</span> <span class="o">+</span> <span class="n">str_len</span><span class="p">]</span> <span class="o">=</span> <span class="sc">&#39;\0&#39;</span><span class="p">;</span></div><div class="line" id="LC91">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pos</span> <span class="o">+=</span> <span class="n">str_len</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span></div><div class="line" id="LC92">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC93">&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC94"><span class="c">/*&nbsp;&nbsp;&nbsp;&nbsp;Flooding&amp; flooding = ((roombatest *) m_os.application())-&gt;getFlooding();</span></div><div class="line" id="LC95"><span class="c">&nbsp;&nbsp;&nbsp;&nbsp;flooding.send(len, buf);*/</span></div><div class="line" id="LC96">&nbsp;&nbsp;&nbsp;&nbsp;<span class="c">//return buf;</span></div><div class="line" id="LC97">&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC98">&nbsp;&nbsp;<span class="k">return</span> <span class="n">len</span><span class="p">;</span></div><div class="line" id="LC99"><span class="p">}</span></div><div class="line" id="LC100">&nbsp;</div><div class="line" id="LC101"><span class="n">uint8</span> <span class="n">Communication</span><span class="o">::</span><span class="n">sendMessage</span><span class="p">(</span><span class="n">uint16</span> <span class="n">robotId</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span> <span class="n">taskName</span><span class="p">,</span></div><div class="line" id="LC102">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">valueLength</span><span class="p">,</span> <span class="k">const</span> <span class="n">uint16</span> <span class="o">*</span> <span class="n">values</span><span class="p">,</span> <span class="n">uint8</span><span class="o">*</span> <span class="n">buf</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC103">&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">taskNameLen</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">taskName</span><span class="p">);</span></div><div class="line" id="LC104">&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">len</span> <span class="o">=</span> <span class="mi">4</span> <span class="o">+</span> <span class="n">taskNameLen</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">+</span> <span class="n">valueLength</span> <span class="o">*</span> <span class="mi">2</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span></div><div class="line" id="LC105">&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">len</span> <span class="o">&lt;</span> <span class="mi">112</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC106">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">pos</span> <span class="o">=</span> <span class="mi">4</span><span class="p">;</span></div><div class="line" id="LC107">&nbsp;</div><div class="line" id="LC108">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="mi">202</span><span class="p">;</span></div><div class="line" id="LC109">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">robotId</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class="line" id="LC110">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="n">robotId</span><span class="p">;</span></div><div class="line" id="LC111">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="mi">3</span><span class="p">]</span> <span class="o">=</span> <span class="n">valueLength</span><span class="p">;</span></div><div class="line" id="LC112">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">valueLength</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC113">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="n">pos</span> <span class="o">+</span> <span class="mi">2</span><span class="o">*</span> <span class="n">i</span> <span class="p">]</span> <span class="o">=</span> <span class="n">values</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class="line" id="LC114">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="n">pos</span> <span class="o">+</span> <span class="mi">2</span><span class="o">*</span> <span class="n">i</span> <span class="o">+</span> <span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">values</span><span class="p">[</span><span class="n">i</span><span class="p">];</span></div><div class="line" id="LC115">&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC116">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">taskNameLen</span><span class="p">;</span> <span class="o">++</span><span class="n">j</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC117">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="n">pos</span> <span class="o">+</span> <span class="mi">2</span> <span class="o">*</span> <span class="n">valueLength</span> <span class="o">+</span> <span class="n">j</span><span class="p">]</span> <span class="o">=</span> <span class="n">taskName</span><span class="p">[</span><span class="n">j</span><span class="p">];</span></div><div class="line" id="LC118">&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC119">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">buf</span><span class="p">[</span><span class="n">len</span> <span class="o">-</span> <span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="sc">&#39;\0&#39;</span><span class="p">;</span></div><div class="line" id="LC120"><span class="c">/*&nbsp;&nbsp;&nbsp;&nbsp;Flooding&amp; flooding = ((roombatest *) m_os.application())-&gt;getFlooding();</span></div><div class="line" id="LC121"><span class="c">&nbsp;&nbsp;&nbsp;&nbsp;flooding.send(len, buf);*/</span></div><div class="line" id="LC122">&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC123">&nbsp;&nbsp;<span class="k">return</span> <span class="n">len</span><span class="p">;</span></div><div class="line" id="LC124"><span class="p">}</span></div><div class="line" id="LC125">&nbsp;</div><div class="line" id="LC126"><span class="kt">void</span> <span class="n">Communication</span><span class="o">::</span><span class="n">decodeMessage</span><span class="p">(</span><span class="n">uint8</span> <span class="n">len</span><span class="p">,</span> <span class="k">const</span> <span class="n">uint8</span> <span class="o">*</span> <span class="n">buf</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC127">&nbsp;&nbsp;<span class="n">RobotLogic</span><span class="o">*</span> <span class="n">logic</span><span class="p">;</span></div><div class="line" id="LC128">&nbsp;&nbsp;<span class="n">logic</span> <span class="o">=</span> <span class="p">((</span><span class="n">roombatest</span> <span class="o">*</span><span class="p">)</span> <span class="n">m_os</span><span class="p">.</span><span class="n">application</span><span class="p">())</span><span class="o">-&gt;</span><span class="n">getRobotLogic</span><span class="p">();</span></div><div class="line" id="LC129">&nbsp;</div><div class="line" id="LC130">&nbsp;&nbsp;<span class="k">switch</span> <span class="p">(</span><span class="n">buf</span><span class="p">[</span><span class="mi">0</span><span class="p">])</span> <span class="p">{</span></div><div class="line" id="LC131">&nbsp;&nbsp;<span class="k">case</span> <span class="mi">200</span><span class="o">:</span></div><div class="line" id="LC132">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">paramLength</span><span class="p">;</span></div><div class="line" id="LC133">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint16</span> <span class="o">*</span><span class="n">parameters</span><span class="p">;</span></div><div class="line" id="LC134">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">taskName</span><span class="p">;</span></div><div class="line" id="LC135">&nbsp;</div><div class="line" id="LC136">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">paramLength</span> <span class="o">=</span> <span class="n">buf</span><span class="p">[</span><span class="mi">3</span><span class="p">];</span></div><div class="line" id="LC137">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">parameters</span> <span class="o">=</span> <span class="p">(</span><span class="n">uint16</span> <span class="o">*</span><span class="p">)</span> <span class="n">isense</span><span class="o">::</span><span class="n">malloc</span><span class="p">(</span><span class="k">sizeof</span><span class="p">(</span><span class="n">uint16</span><span class="p">)</span> <span class="o">*</span> <span class="n">paramLength</span><span class="p">);</span></div><div class="line" id="LC138">&nbsp;</div><div class="line" id="LC139">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">paramLength</span> <span class="o">*</span> <span class="mi">2</span><span class="p">;</span> <span class="n">i</span> <span class="o">=</span> <span class="n">i</span> <span class="o">+</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="LC140">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">parameters</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="p">(</span><span class="n">buf</span><span class="p">[</span><span class="mi">4</span> <span class="o">+</span> <span class="n">i</span><span class="p">]</span> <span class="o">&lt;&lt;</span> <span class="mi">8</span><span class="p">)</span> <span class="o">|</span> <span class="n">buf</span><span class="p">[</span><span class="mi">4</span> <span class="o">+</span> <span class="n">i</span> <span class="o">+</span> <span class="mi">1</span><span class="p">];</span></div><div class="line" id="LC141">&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC142">&nbsp;</div><div class="line" id="LC143">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">taskName</span> <span class="o">=</span> <span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="p">)</span> <span class="n">buf</span> <span class="o">+</span> <span class="mi">4</span> <span class="o">+</span> <span class="n">paramLength</span> <span class="o">*</span> <span class="mi">2</span><span class="p">;</span></div><div class="line" id="LC144">&nbsp;</div><div class="line" id="LC145">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">logic</span><span class="o">-&gt;</span><span class="n">doTask</span><span class="p">(</span><span class="n">taskName</span><span class="p">,</span> <span class="n">paramLength</span><span class="p">,</span> <span class="n">parameters</span><span class="p">);</span></div><div class="line" id="LC146">&nbsp;</div><div class="line" id="LC147">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">isense</span><span class="o">::</span><span class="n">free</span><span class="p">(</span><span class="n">parameters</span><span class="p">);</span></div><div class="line" id="LC148">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class="line" id="LC149">&nbsp;&nbsp;<span class="k">case</span> <span class="mi">201</span><span class="o">:</span></div><div class="line" id="LC150">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">logic</span><span class="o">-&gt;</span><span class="n">getCapabilities</span><span class="p">();</span></div><div class="line" id="LC151">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class="line" id="LC152">&nbsp;&nbsp;<span class="k">case</span> <span class="mi">202</span><span class="o">:</span></div><div class="line" id="LC153">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">m_os</span><span class="p">.</span><span class="n">uart</span><span class="p">(</span><span class="mi">0</span><span class="p">).</span><span class="n">write_packet</span><span class="p">(</span><span class="n">isense</span><span class="o">::</span><span class="n">Uart</span><span class="o">::</span><span class="n">MESSAGE_TYPE_CUSTOM_IN_1</span><span class="p">,</span></div><div class="line" id="LC154">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">(</span><span class="kt">char</span><span class="o">*</span><span class="p">)</span> <span class="n">buf</span><span class="p">,</span> <span class="n">len</span><span class="p">);</span></div><div class="line" id="LC155">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class="line" id="LC156">&nbsp;&nbsp;<span class="k">case</span> <span class="mi">203</span><span class="o">:</span></div><div class="line" id="LC157">&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">m_os</span><span class="p">.</span><span class="n">uart</span><span class="p">(</span><span class="mi">0</span><span class="p">).</span><span class="n">write_packet</span><span class="p">(</span><span class="n">isense</span><span class="o">::</span><span class="n">Uart</span><span class="o">::</span><span class="n">MESSAGE_TYPE_CUSTOM_IN_1</span><span class="p">,</span></div><div class="line" id="LC158">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">(</span><span class="kt">char</span><span class="o">*</span><span class="p">)</span> <span class="n">buf</span><span class="p">,</span> <span class="n">len</span><span class="p">);</span></div><div class="line" id="LC159">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class="line" id="LC160">&nbsp;&nbsp;<span class="k">default</span><span class="o">:</span></div><div class="line" id="LC161">&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class="line" id="LC162">&nbsp;&nbsp;<span class="p">}</span></div><div class="line" id="LC163">&nbsp;</div><div class="line" id="LC164"><span class="p">}</span></div><div class="line" id="LC165">&nbsp;</div></pre></div>
            
          </td>
        </tr>
      </table>
    
  </div>


      </div>
    </div>
    
  


  </div>

      

      <div class="push"></div>
    </div>

    <div id="footer">
      <div class="site">
        <div class="info">
          <div class="links">
            <a href="http://github.com/blog/148-github-shirts-now-available">Shirts</a> |
            <a href="http://github.com/blog">Blog</a> |
            <a href="http://support.github.com/">Support</a> |
            <a href="http://github.com/training">Training</a> |
            <a href="http://github.com/contact">Contact</a> |
            <a href="http://groups.google.com/group/github/">Google Group</a> |
            <a href="http://develop.github.com">API</a> |
            <a href="http://twitter.com/github">Status</a>
          </div>
          <div class="company">
            <span id="_rrt" title="0.35817s from xc88-s00039">GitHub</span>&trade;
            is <a href="http://logicalawesome.com/">Logical Awesome</a> &copy;2009 | <a href="/site/terms">Terms of Service</a> | <a href="/site/privacy">Privacy Policy</a>
          </div>
        </div>
        <div class="sponsor">
          <a href="http://engineyard.com"><img src="/images/modules/footer/ey-rubyhosting.png" alt="Engine Yard" /></a>
        </div>
      </div>
    </div>

    <div id="coming_soon" style="display:none;">
      This feature is coming soon.  Sit tight!
    </div>

    
        <script type="text/javascript">
    var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl." : "http://www.");
    document.write(unescape("%3Cscript src='" + gaJsHost + "google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
    </script>
    <script type="text/javascript">
    var pageTracker = _gat._getTracker("UA-3769691-2");
    pageTracker._initData();
    pageTracker._trackPageview();
    </script>

    
  </body>
</html>

