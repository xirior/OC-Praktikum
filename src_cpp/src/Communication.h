



<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
  <head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8" />
        <title>roomba/src/Communication.h at 96b35c6b6658c617b0698b7856bb48f922970dcb from fraggytheundead's OC-Praktikum - GitHub</title>
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
      <b><a href="/fraggytheundead/OC-Praktikum/tree">OC-Praktikum</a></b> / <a href="/fraggytheundead/OC-Praktikum/tree/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba">roomba</a> / <a href="/fraggytheundead/OC-Praktikum/tree/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba/src">src</a> / Communication.h       <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="/flash/clippy.swf"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="text=roomba/src/Communication.h">
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
             FlashVars="text=roomba/src/Communication.h"
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
            <span>39 lines (31 sloc)</span>
            <span>1.217 kb</span>
          </div>
          <div class="actions">
            
            <a href="/fraggytheundead/OC-Praktikum/raw/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba/src/Communication.h" id="raw-url">raw</a>
            
              <a href="/fraggytheundead/OC-Praktikum/blame/96b35c6b6658c617b0698b7856bb48f922970dcb/roomba/src/Communication.h">blame</a>
            
            <a href="/fraggytheundead/OC-Praktikum/commits/master/roomba/src/Communication.h">history</a>
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
</pre>
          </td>
          <td width="100%">
            
            
              <div class="highlight"><pre><div class="line" id="LC1"><span class="c">/* ----------------------------------------------------------------------</span></div><div class="line" id="LC2"><span class="c"> * This file is part of the WISEBED project.</span></div><div class="line" id="LC3"><span class="c"> * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck</span></div><div class="line" id="LC4"><span class="c"> * This is free software; you can redistribute it and/or modify it</span></div><div class="line" id="LC5"><span class="c"> * under the terms of the BSD License. Refer to bsd-licence.txt</span></div><div class="line" id="LC6"><span class="c"> * file in the root of the source tree for further details.</span></div><div class="line" id="LC7"><span class="c">------------------------------------------------------------------------*/</span></div><div class="line" id="LC8">&nbsp;</div><div class="line" id="LC9"><span class="c">/*</span></div><div class="line" id="LC10"><span class="c"> * Communication.h</span></div><div class="line" id="LC11"><span class="c"> *</span></div><div class="line" id="LC12"><span class="c"> *  Created on: 04.06.2009</span></div><div class="line" id="LC13"><span class="c"> *      Author: Administrator</span></div><div class="line" id="LC14"><span class="c"> */</span></div><div class="line" id="LC15"><span class="c">//ueberlegen, die methoden statisch zu machen</span></div><div class="line" id="LC16">&nbsp;</div><div class="line" id="LC17"><span class="cp">#ifndef __OCPROJ_COMMUNICATION_H</span></div><div class="line" id="LC18"><span class="cp">#define __OCPROJ_COMMUNICATION_H</span></div><div class="line" id="LC19">&nbsp;</div><div class="line" id="LC20"><span class="cp">#include &lt;isense/os.h&gt;</span></div><div class="line" id="LC21"><span class="cp">#include &lt;isense/protocols/routing/flooding.h&gt;</span></div><div class="line" id="LC22">&nbsp;</div><div class="line" id="LC23"><span class="k">class</span> <span class="nc">Communication</span> <span class="p">{</span></div><div class="line" id="LC24"><span class="k">public</span><span class="o">:</span></div><div class="line" id="LC25">&nbsp;&nbsp;<span class="n">Communication</span><span class="p">(</span><span class="n">isense</span><span class="o">::</span><span class="n">Os</span><span class="o">&amp;</span> <span class="n">os</span><span class="p">);</span></div><div class="line" id="LC26">&nbsp;&nbsp;<span class="k">virtual</span> <span class="o">~</span><span class="n">Communication</span><span class="p">();</span></div><div class="line" id="LC27">&nbsp;</div><div class="line" id="LC28">&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">sendFeatures</span><span class="p">(</span><span class="n">uint16</span> <span class="n">robotId</span><span class="p">,</span> <span class="n">uint8</span> <span class="n">taskListLength</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">**</span> <span class="n">taskList</span><span class="p">,</span></div><div class="line" id="LC29">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">uint8</span> <span class="o">*</span> <span class="n">paramListLength</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">***</span>  <span class="n">paramList</span><span class="p">,</span> <span class="n">uint8</span> <span class="o">*</span><span class="n">buf</span><span class="p">);</span></div><div class="line" id="LC30">&nbsp;&nbsp;<span class="n">uint8</span> <span class="n">sendMessage</span><span class="p">(</span><span class="n">uint16</span> <span class="n">robotId</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span> <span class="n">taskName</span><span class="p">,</span> <span class="n">uint8</span> <span class="n">valueLength</span><span class="p">,</span></div><div class="line" id="LC31">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">uint16</span> <span class="o">*</span> <span class="n">values</span><span class="p">,</span> <span class="n">uint8</span><span class="o">*</span> <span class="n">buf</span><span class="p">);</span></div><div class="line" id="LC32">&nbsp;&nbsp;<span class="kt">void</span> <span class="n">decodeMessage</span><span class="p">(</span><span class="n">uint8</span> <span class="n">len</span><span class="p">,</span> <span class="k">const</span> <span class="n">uint8</span> <span class="o">*</span> <span class="n">buf</span><span class="p">);</span></div><div class="line" id="LC33">&nbsp;</div><div class="line" id="LC34"><span class="k">private</span><span class="o">:</span></div><div class="line" id="LC35">&nbsp;&nbsp;<span class="n">isense</span><span class="o">::</span><span class="n">Os</span><span class="o">&amp;</span> <span class="n">m_os</span><span class="p">;</span></div><div class="line" id="LC36"><span class="p">};</span></div><div class="line" id="LC37">&nbsp;</div><div class="line" id="LC38"><span class="cp">#endif </span><span class="c">/* __OCPROJ_COMMUNICATION_H */</span><span class="cp"></span></div><div class="line" id="LC39">&nbsp;</div></pre></div>
            
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
            <span id="_rrt" title="0.04280s from xc88-s00039">GitHub</span>&trade;
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

