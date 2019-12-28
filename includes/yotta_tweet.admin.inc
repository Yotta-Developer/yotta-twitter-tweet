<?php


function yotta_tweet_proxy_server_settings() {

    $form['yotta_tweet']['proxy'] = [
        '#type' => 'fieldset',
        '#title' => t('Twitter Proxy settings'),
        '#collapsible' => TRUE,
    ];
    $form['yotta_tweet']['proxy']['yotta_tweet_proxy_server_status'] = [
        '#type' => 'checkbox',
        '#title' => t('Specify proxy server '),
        '#default_value' => variable_get('yotta_tweet_proxy_server_status', 0),
        '#description' => 'Use a proxy server for this connection (These settings will not apply to other connections).',
    ];
    $form['yotta_tweet']['proxy']['yotta_tweet_proxy_server_ip'] = [
        '#type' => 'textfield',
        '#title' => t('Server'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_proxy_server_ip'),
        '#description' => t('The IP address or hostname of the proxy server.'),
        '#states' => [
            'disabled' => [
                'input[name="yotta_tweet_proxy_server_status"]' => ['checked' => FALSE],
            ],
        ],
    ];
    $form['yotta_tweet']['proxy']['yotta_tweet_proxy_server_port'] = [
        '#type' => 'textfield',
        '#title' => t('Port'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_proxy_server_port'),
        '#description' => t('The port number used by the proxy server for client connections.'),
        '#states' => [
            'disabled' => [
                'input[name="yotta_tweet_proxy_server_status"]' => ['checked' => FALSE],
            ],
        ],
    ];
    $form['yotta_tweet']['proxy']['authentication'] = [
        '#type' => 'fieldset',
        '#title' => t('Authentication'),
        '#collapsible' => TRUE,
        '#states' => [
            'disabled' => [
                'input[name="yotta_tweet_proxy_server_status"]' => ['checked' => FALSE],
            ],
        ],
    ];
    $form['yotta_tweet']['proxy']['authentication']['yotta_tweet_proxy_server_authentication_type'] = [
        '#type' => 'select',
        '#title' => t('Type'),
        '#options' => [
            0 => t('Anonymous'),
            1 => t('Normal'),
        ],
        '#default_value' => variable_get('yotta_tweet_proxy_server_authentication_type'),
        '#description' => t('Choose your authentication type.'),
    ];
    $form['yotta_tweet']['proxy']['authentication']['yotta_tweet_proxy_server_authentication_username'] = [
        '#type' => 'textfield',
        '#title' => t('Username'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_proxy_server_authentication_username'),
        '#description' => t('Set a username for your proxy.'),
        '#states' => [
            'invisible' => [
                ':input[name="yotta_tweet_proxy_server_authentication_type"]' => ['value' => '0'],
            ],
        ],
    ];
    $form['yotta_tweet']['proxy']['authentication']['yotta_tweet_proxy_server_authentication_password'] = [
        '#type' => 'textfield',
        '#title' => t('Password'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_proxy_server_authentication_password'),
        '#description' => t('Set a password for your proxy.'),
        '#states' => [
            'invisible' => [
                ':input[name="yotta_tweet_proxy_server_authentication_type"]' => ['value' => '0'],
            ],
        ],
    ];

    return system_settings_form($form);
}

function yotta_tweet_twitter_account_settings() {

    $form['yotta_tweet'] = [
        '#type' => 'fieldset',
        '#title' => t('Twitter account settings'),
        '#collapsible' => TRUE,
    ];
    $form['yotta_tweet']['name']['yotta_tweet_twitter_account_name'] = [
        '#type' => 'textfield',
        '#title' => t('Twitter Application Name'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_twitter_account_name'),
        '#description' => t('Insert unique twitter application name .'),
        '#required' => TRUE,
    ];
    $form['yotta_tweet']['consumer_key']['yotta_tweet_twitter_consumer_key'] = [
        '#type' => 'textfield',
        '#title' => t('Consumer Key'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_twitter_consumer_key'),
        '#description' => t('Insert unique Consumer Key .'),
        '#required' => TRUE,
    ];
    $form['yotta_tweet']['consumer_secret']['yotta_tweet_twitter_consumer_secret'] = [
        '#type' => 'textfield',
        '#title' => t('Consumer Secret'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_twitter_consumer_secret'),
        '#description' => t('Insert unique consumer secret .'),
        '#required' => TRUE,
    ];
    $form['yotta_tweet']['oauth_token']['yotta_tweet_twitter_oauth_token'] = [
        '#type' => 'textfield',
        '#title' => t('Oauth Token'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_twitter_oauth_token'),
        '#description' => t('Insert unique oauth token .'),
        '#required' => TRUE,
    ];
    $form['yotta_tweet']['oauth_secret']['yotta_tweet_twitter_oauth_secret'] = [
        '#type' => 'textfield',
        '#title' => t('Oauth Secret'),
        '#size' => 60,
        '#default_value' => variable_get('yotta_tweet_twitter_oauth_secret'),
        '#description' => t('Insert unique oauth secret .'),
        '#required' => TRUE,
    ];

    return system_settings_form($form);
}

function yotta_tweet_intermediate_server_settings(){
  $form['yotta_tweet']['intermediate'] = [
    '#type' => 'fieldset',
    '#title' => t('Twitter intermediate server settings'),
    '#collapsible' => TRUE,
  ];
  $form['yotta_tweet']['intermediate']['yotta_tweet_intermediate_server_status'] = [
    '#type' => 'checkbox',
    '#title' => t('Specify intermediate server endpoint.'),
    '#default_value' => variable_get('yotta_tweet_intermediate_server_status', 0),
    '#description' => 'An intermediate server is a program that handles communications requests to a resource manager program on behalf of a user program.',
  ];
  $form['yotta_tweet']['intermediate']['yotta_tweet_intermediate_server_endpoint'] = [
    '#type' => 'textfield',
    '#title' => t('Intermediate server endpoint'),
    '#size' => 60,
    '#default_value' => variable_get('yotta_tweet_intermediate_server_endpoint'),
    '#description' => t('The IP address or hostname of the intermediate server.'),
    '#states' => [
      'disabled' => [
        'input[name="yotta_tweet_intermediate_server_status"]' => ['checked' => FALSE],
      ],
    ],
  ];
  return system_settings_form($form);
}
