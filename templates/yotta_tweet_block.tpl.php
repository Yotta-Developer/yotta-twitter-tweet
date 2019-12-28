<?php
if(!empty($body)) {
    foreach ($body as $key => $value) {

        print !empty($body[$key]->text) ? "<p>*-". $body[$key]->text . "</p>":"";

    }
}

//dpm($body);