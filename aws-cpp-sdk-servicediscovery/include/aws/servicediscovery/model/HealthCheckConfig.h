﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/HealthCheckType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
   * an optional health check. If you specify settings for a health check, Amazon
   * Route 53 associates the health check with all the resource record sets that you
   * specify in <code>DnsConfig</code>.</p> <note> <p>The health check uses 30
   * seconds as the request interval. This is the number of seconds between the time
   * that each Amazon Route 53 health checker gets a response from your endpoint and
   * the time that it sends the next health check request. A health checker in each
   * data center around the world sends your endpoint a health check request every 30
   * seconds. On average, your endpoint receives a health check request about every
   * two seconds. Health checkers in different data centers don't coordinate with one
   * another, so you'll sometimes see several requests per second followed by a few
   * seconds with no health checks at all.</p> </note> <p>For information about the
   * charges for health checks, see <a
   * href="http://aws.amazon.com/route53/pricing">Amazon Route 53
   * Pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/HealthCheckConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API HealthCheckConfig
  {
  public:
    HealthCheckConfig();
    HealthCheckConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    HealthCheckConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify HTTPS for the value of
     * <code>Type</code>, the endpoint must support TLS v1.0 or later.</p> </important>
     * </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries to establish a TCP
     * connection.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline const HealthCheckType& GetType() const{ return m_type; }

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify HTTPS for the value of
     * <code>Type</code>, the endpoint must support TLS v1.0 or later.</p> </important>
     * </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries to establish a TCP
     * connection.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline void SetType(const HealthCheckType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify HTTPS for the value of
     * <code>Type</code>, the endpoint must support TLS v1.0 or later.</p> </important>
     * </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries to establish a TCP
     * connection.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline void SetType(HealthCheckType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify HTTPS for the value of
     * <code>Type</code>, the endpoint must support TLS v1.0 or later.</p> </important>
     * </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries to establish a TCP
     * connection.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline HealthCheckConfig& WithType(const HealthCheckType& value) { SetType(value); return *this;}

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify HTTPS for the value of
     * <code>Type</code>, the endpoint must support TLS v1.0 or later.</p> </important>
     * </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries to establish a TCP
     * connection.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline HealthCheckConfig& WithType(HealthCheckType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Amazon Route 53 automatically adds
     * the DNS name for the service and a leading forward slash (<code>/</code>)
     * character. </p>
     */
    inline const Aws::String& GetResourcePath() const{ return m_resourcePath; }

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Amazon Route 53 automatically adds
     * the DNS name for the service and a leading forward slash (<code>/</code>)
     * character. </p>
     */
    inline void SetResourcePath(const Aws::String& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Amazon Route 53 automatically adds
     * the DNS name for the service and a leading forward slash (<code>/</code>)
     * character. </p>
     */
    inline void SetResourcePath(Aws::String&& value) { m_resourcePathHasBeenSet = true; m_resourcePath = std::move(value); }

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Amazon Route 53 automatically adds
     * the DNS name for the service and a leading forward slash (<code>/</code>)
     * character. </p>
     */
    inline void SetResourcePath(const char* value) { m_resourcePathHasBeenSet = true; m_resourcePath.assign(value); }

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Amazon Route 53 automatically adds
     * the DNS name for the service and a leading forward slash (<code>/</code>)
     * character. </p>
     */
    inline HealthCheckConfig& WithResourcePath(const Aws::String& value) { SetResourcePath(value); return *this;}

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Amazon Route 53 automatically adds
     * the DNS name for the service and a leading forward slash (<code>/</code>)
     * character. </p>
     */
    inline HealthCheckConfig& WithResourcePath(Aws::String&& value) { SetResourcePath(std::move(value)); return *this;}

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Amazon Route 53 automatically adds
     * the DNS name for the service and a leading forward slash (<code>/</code>)
     * character. </p>
     */
    inline HealthCheckConfig& WithResourcePath(const char* value) { SetResourcePath(value); return *this;}


    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline int GetFailureThreshold() const{ return m_failureThreshold; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline void SetFailureThreshold(int value) { m_failureThresholdHasBeenSet = true; m_failureThreshold = value; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline HealthCheckConfig& WithFailureThreshold(int value) { SetFailureThreshold(value); return *this;}

  private:

    HealthCheckType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_resourcePath;
    bool m_resourcePathHasBeenSet;

    int m_failureThreshold;
    bool m_failureThresholdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
